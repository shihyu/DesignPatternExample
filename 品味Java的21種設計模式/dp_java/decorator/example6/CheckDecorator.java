package cn.javass.dp.decorator.example6;
/**
 * 实现权限控制
 */
public class CheckDecorator extends Decorator {
    public CheckDecorator(GoodsSaleEbi ebi) {
        super(ebi);
    }

    public boolean sale(String user, String customer, SaleModel saleModel) {
        //简单点，只让张三执行这个功能
        if (!"张三".equals(user)) {
            System.out.println("对不起" + user + "，你没有保存销售单的权限");
            //就不再调用被装饰对象的功能了
            return false;
        } else {
            return this.ebi.sale(user, customer, saleModel);
        }
    }
}
