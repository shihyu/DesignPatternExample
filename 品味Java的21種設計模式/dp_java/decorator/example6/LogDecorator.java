package cn.javass.dp.decorator.example6;
import java.text.*;
import java.util.Date;
/**
 * 实现日志记录
 */
public class LogDecorator extends Decorator {
    public LogDecorator(GoodsSaleEbi ebi) {
        super(ebi);
    }

    public boolean sale(String user, String customer, SaleModel saleModel) {
        //执行业务功能
        boolean f = this.ebi.sale(user, customer, saleModel);
        //在执行业务功能过后，记录日志
        DateFormat df = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss SSS");
        System.out.println("日志记录：" + user + "于" + df.format(new Date()) + "时保存了一条销售记录，客户是" + customer + ",购买记录是" + saleModel);
        return f;
    }

}
