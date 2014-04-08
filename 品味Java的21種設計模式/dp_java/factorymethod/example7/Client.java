package cn.javass.dp.factorymethod.example7;

public class Client {
    public static void main(String[] args) {
        //      //创建需要使用的Creator对象
        //      ExportOperate operate = new ExportOperate();
        //      //调用输出数据的功能方法，传入选择到处类型的参数
        //      operate.export(1,"测试数据");

        //创建需要使用的Creator对象
        ExportOperate operate = new ExportOperate2();
        //下面变换传入的参数来测试参数化工厂方法
        operate.export(1, "Test1");
        operate.export(2, "Test2");
        operate.export(3, "Test3");
    }
}
