package cn.javass.dp.decorator.example6;

public class Client {
    public static void main(String[] args) {
        //得到业务接口,组合装饰器
        GoodsSaleEbi ebi = new CheckDecorator(new LogDecorator(new GoodsSaleEbo()));
        //准备测试数据
        SaleModel saleModel = new SaleModel();
        saleModel.setGoods("Moto手机");
        saleModel.setSaleNum(2);
        //调用业务功能
        ebi.sale("张三", "张三丰", saleModel);
        ebi.sale("李四", "张三丰", saleModel);
    }
}
