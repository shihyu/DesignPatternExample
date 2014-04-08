package cn.javass.dp.facade.example1;

public class Client {
    public static void main(String[] args) {
        //现在没有配置文件，就直接使用默认的配置
        //通常情况下，三层都应该生成，也就是说客户端必须
        //对这些模块都有了解，才能够正确使用它们
        new Presentation().generate();
        new Business().generate();
        new DAO().generate();
    }
}