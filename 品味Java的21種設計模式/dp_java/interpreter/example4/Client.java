package cn.javass.dp.interpreter.example4;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

import org.w3c.dom.Document;
import org.w3c.dom.Element;

public class Client {
    public static void main(String[] args) throws Exception {
        //准备上下文
        Context c = new Context("InterpreterTest.xml");

        //想要获取多个d元素的值，也就是如下表达式的值："root/a/b/d$"

        //      //首先要构建解释器的抽象语法树
        //      ElementExpression root = new ElementExpression("root");
        //      ElementExpression aEle = new ElementExpression("a");
        //      ElementExpression bEle = new ElementExpression("b");
        //      ElementsTerminalExpression dEle = new ElementsTerminalExpression("d");
        //      //组合起来
        //      root.addEle(aEle);
        //      aEle.addEle(bEle);
        //      bEle.addEle(dEle);
        //      //调用
        //      String ss[] = root.interpret(c);
        //      for(String s : ss){
        //          System.out.println("d的值是="+s);
        //      }

        //想要获取d元素的id属性，也就是如下表达式的值："a/b/d$.id$"
        ElementExpression root = new ElementExpression("root");
        ElementExpression aEle = new ElementExpression("a");
        ElementExpression bEle = new ElementExpression("b");
        ElementsExpression dEle = new ElementsExpression("d");
        PropertysTerminalExpression prop = new PropertysTerminalExpression("id");
        //组合
        root.addEle(aEle);
        aEle.addEle(bEle);
        bEle.addEle(dEle);
        dEle.addEle(prop);
        //调用
        String ss[] = root.interpret(c);

        for (String s : ss) {
            System.out.println("d的属性id值是=" + s);
        }

        //如果要使用同一个上下文，连续进行解析，需要重新初始化上下文对象
        //比如要连续的重新再获取一次属性id的值，当然你可以重新组合元素，
        //重新解析，只要是在使用同一个上下文，就需要重新初始化上下文对象
        c.reInit();
        String ss2[] = root.interpret(c);

        for (String s : ss2) {
            System.out.println("重新获取d的属性id值是=" + s);
        }
    }
}
