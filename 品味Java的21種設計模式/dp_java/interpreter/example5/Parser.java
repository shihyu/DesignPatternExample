package cn.javass.dp.interpreter.example5;

import java.util.*;
/**
 * 根据语法来解析表达式，转换成为相应的抽象语法树
 */
public class Parser {
    /**
     * 私有化构造器，避免外部无谓的创建对象实例
     */
    private Parser() {
        //
    }
    //定义几个常量，内部使用
    private final static String BACKLASH = "/";
    private final static String DOT = ".";
    private final static String DOLLAR = "$";
    /**
     * 按照分解的先后记录需要解析的元素的名称
     */
    private static List<String> listEle = null;
    /**
     * 传入一个字符串表达式，通过解析，组合成为一个抽象的语法树
     * @param expr 描述要取值的字符串表达式
     * @return 对应的抽象语法树
     */
    public static ReadXmlExpression parse(String expr) {
        //先初始化记录需解析的元素的名称的集会
        listEle = new ArrayList<String>();

        //第一步：分解表达式，得到需要解析的元素名称和该元素对应的解析模型
        Map<String, ParserModel> mapPath = parseMapPath(expr);

        //第二步：根据节点的属性转换成为相应的解释器对象
        List<ReadXmlExpression> list = mapPath2Interpreter(mapPath);

        //第三步：组合抽象语法树，一定要按照先后顺序来组合，
        //否则对象的包含关系就乱了
        ReadXmlExpression returnRe = buildTree(list);

        return returnRe;
    }


    /*----------------------开始实现第一步-----------------------*/
    /**
     * 按照从左到右顺序来分解表达式，得到需要解析的元素名称，
     * 还有该元素对应的解析模型
     * @param expr 需要分解的表达式
     * @return 得到需要解析的元素名称，还有该元素对应的解析模型
     */
    private static Map<String, ParserModel> parseMapPath(String expr) {
        //先按照/分割字符串
        StringTokenizer tokenizer = new StringTokenizer(expr, BACKLASH);
        //初始化一个map用来存放分解出来的值
        Map<String, ParserModel> mapPath = new HashMap<String, ParserModel>();

        while (tokenizer.hasMoreTokens()) {
            String onePath = tokenizer.nextToken();

            if (tokenizer.hasMoreTokens()) {
                //还有下一个值，说明这不是最后一个元素
                //按照现在的语法，属性必然在最后，因此也不是属性
                setParsePath(false, onePath, false, mapPath);
            } else {
                //说明到最后了
                int dotIndex = onePath.indexOf(DOT);

                if (dotIndex > 0) {
                    //说明是要获取属性的值，那就按照"."来分割，前面的就是元素名字，后面的是属性的名字
                    String eleName = onePath.substring(0, dotIndex);
                    String propName = onePath.substring(dotIndex + 1);
                    //设置属性前面的那个元素，自然不是最后一个，也不是属性
                    setParsePath(false, eleName, false, mapPath);
                    //设置属性，按照现在的语法定义，属性只能是最后一个
                    setParsePath(true, propName, true, mapPath);
                } else {
                    //说明是取元素的值，而且是最后一个元素的值
                    setParsePath(true, onePath, false, mapPath);
                }

                break;
            }
        }

        return mapPath;
    }
    /**
     * 按照分解出来的位置和名称来设置需要解析的元素名称，
     * 还有该元素对应的解析模型
     * @param end 是否是最后一个
     * @param ele 元素名称
     * @param propertyValue 是否是取属性
     * @param mapPath 设置需要解析的元素名称，还有该元素对应的解析模型的Map对象
     */
    private static void setParsePath(boolean end, String ele, boolean propertyValue, Map<String, ParserModel> mapPath) {
        ParserModel pm = new ParserModel();
        pm.setEnd(end);
        //如果带有$符号就说明不是一个值
        pm.setSingleVlaue(!(ele.indexOf(DOLLAR) > 0));
        pm.setPropertyValue(propertyValue);
        //去掉$
        ele = ele.replace(DOLLAR, "");
        mapPath.put(ele, pm);
        listEle.add(ele);
    }
    /*----------------------第一步实现结束-----------------------*/

    /*----------------------开始实现第二步-----------------------*/
    /**
     * 把分解出来的元素名称，根据对应的解析模型转换成为相应的解释器对象
     * @param mapPath 分解出来的需要解析的元素名称，还有该元素对应的解析模型
     * @return 把每个元素转换成为相应的解释器对象后的集合
     */
    private static List<ReadXmlExpression> mapPath2Interpreter(Map<String, ParserModel> mapPath) {
        List<ReadXmlExpression> list = new ArrayList<ReadXmlExpression>();

        //一定要按照分解的先后顺序来转换成解释器对象
        for (String key : listEle) {
            ParserModel pm = mapPath.get(key);
            ReadXmlExpression obj = null;

            if (!pm.isEnd()) {
                if (pm.isSingleVlaue()) {
                    //不是最后一个，是一个值，转化为
                    obj = new ElementExpression(key);
                } else {
                    //不是最后一个，是多个值，转化为
                    obj = new ElementsExpression(key);
                }
            } else {
                if (pm.isPropertyValue()) {
                    if (pm.isSingleVlaue()) {
                        //是最后一个，是一个值，取属性的值，转化为
                        obj = new PropertyTerminalExpression(key);
                    } else {
                        //是最后一个，是多个值，取属性的值，转化为
                        obj = new PropertysTerminalExpression(key);
                    }
                } else {
                    if (pm.isSingleVlaue()) {
                        //是最后一个，是一个值，取元素的值，转化为
                        obj = new ElementTerminalExpression(key);
                    } else {
                        //是最后一个，是多个值，取元素的值，转化为
                        obj = new ElementsTerminalExpression(key);
                    }
                }
            }

            //把转换后的对象添加到集合中
            list.add(obj);
        }

        return list;
    }
    /*----------------------第二步实现结束-----------------------*/

    /*----------------------开始实现第三步-----------------------*/
    private static ReadXmlExpression buildTree(List<ReadXmlExpression> list) {
        //第一个对象，也是返回去的对象，就是抽象语法树的根
        ReadXmlExpression returnRe = null;
        //定义上一个对象
        ReadXmlExpression preRe = null;

        for (ReadXmlExpression re : list) {
            if (preRe == null) {
                //说明是第一个元素
                preRe = re;
                returnRe = re;
            } else {
                //把元素添加到上一个对象下面，同时把本对象设置成为oldRe，作为下一个对象的父结点
                if (preRe instanceof ElementExpression) {
                    ElementExpression ele = (ElementExpression)preRe;
                    ele.addEle(re);
                    preRe = re;
                } else if (preRe instanceof ElementsExpression) {
                    ElementsExpression eles = (ElementsExpression)preRe;
                    eles.addEle(re);
                    preRe = re;
                }
            }
        }

        return returnRe;
    }
    /*----------------------第三步实现结束-----------------------*/
}
