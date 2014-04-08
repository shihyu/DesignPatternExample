package cn.javass.dp.decorator.example4;

import java.util.Date;

/**
 * 基本的实现计算奖金的类，也是被装饰器装饰的对象
 */
public class ConcreteComponent extends Component {

    public double calcPrize(String user, Date begin, Date end) {
        //只是一个默认的实现，默认没有奖金
        return 0;
    }
}
