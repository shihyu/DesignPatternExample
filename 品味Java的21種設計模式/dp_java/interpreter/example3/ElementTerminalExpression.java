package cn.javass.dp.interpreter.example3;

import org.w3c.dom.Element;
import org.w3c.dom.NodeList;
/**
 * 元素作为终结符对应的解释器
 */
public class ElementTerminalExpression  extends ReadXmlExpression {
    /**
     * 元素的名字
     */
    private String eleName = "";
    public ElementTerminalExpression(String name) {
        this.eleName = name;
    }

    public String[] interpret(Context c) {
        //先取出上下文里的当前元素作为父级元素
        Element pEle = c.getPreEle();
        //查找到当前元素名称所对应的xml元素
        Element ele = null;

        if (pEle == null) {
            //说明现在获取的是根元素
            ele = c.getDocument().getDocumentElement();
            c.setPreEle(ele);
        } else {
            //根据父级元素和要查找的元素的名称来获取当前的元素
            ele = c.getNowEle(pEle, eleName);
            //把当前获取的元素放到上下文里面
            c.setPreEle(ele);
        }

        //然后需要去获取这个元素的值
        String[] ss = new String[1];
        ss[0] = ele.getFirstChild().getNodeValue();
        return ss;
    }
}
