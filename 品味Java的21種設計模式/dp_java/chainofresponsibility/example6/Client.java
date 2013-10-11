package cn.javass.dp.chainofresponsibility.example6;

public class Client {
	public static void main(String[] args) {
		//创建业务对象
		GoodsSaleEbo ebo = new GoodsSaleEbo();
		//准备测试数据
		SaleModel saleModel = new SaleModel();
		saleModel.setGoods("张学友怀旧经典");
		saleModel.setSaleNum(10);
		
		//调用业务功能
		ebo.sale("小李", "张三", saleModel);
		ebo.sale("小张", "李四", saleModel);
	}
}
