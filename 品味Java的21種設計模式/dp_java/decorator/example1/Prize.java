package cn.javass.dp.decorator.example1;

import java.util.Date;
/**
 * 计算奖金的对象
 */
public class Prize {
    /**
     * 计算某人在某段时间内的奖金，有些参数在演示中并不会使用，
     * 但是在实际业务实现上是会用的，为了表示这是个具体的业务方法，
     * 因此这些参数被保留了
     * @param user 被计算奖金的人员
     * @param begin 计算奖金的开始时间
     * @param end 计算奖金的结束时间
     * @return 某人在某段时间内的奖金
     */
    public  double calcPrize(String user, Date begin, Date end) {
        double prize = 0.0;

        //计算当月业务奖金，所有人都会计算
        prize = this.monthPrize(user, begin, end);
        //计算累计奖金
        prize += this.sumPrize(user, begin, end);

        //需要判断该人员是普通人员还是业务经理，团队奖金只有业务经理才有
        if (this.isManager(user)) {
            prize += this.groupPrize(user, begin, end);
        }

        return prize;
    }
    /**
     * 计算某人的当月业务奖金，参数重复，就不再注释了
     */
    private double monthPrize(String user, Date begin, Date end) {
        //计算当月业务奖金,按照人员去获取当月的业务额，然后再乘以3%
        double prize = TempDB.mapMonthSaleMoney.get(user) * 0.03;
        System.out.println(user + "当月业务奖金" + prize);
        return prize;
    }
    /**
     * 计算某人的累计奖金，参数重复，就不再注释了
     */
    public double sumPrize(String user, Date begin, Date end) {
        //计算累计奖金,其实这里应该按照人员去获取累计的业务额，然后再乘以0.1%
        //简单演示一下，假定大家的累计业务额都是1000000元
        double prize = 1000000 * 0.001;
        System.out.println(user + "累计奖金" + prize);
        return prize;
    }
    /**
     * 判断人员是普通人员还是业务经理
     * @param user 被判断的人员
     * @return true表示是业务经理,false表示是普通人员
     */
    private boolean isManager(String user) {
        //应该从数据库中获取人员对应的职务
        //为了演示，简单点判断，只有王五是经理
        if ("王五".equals(user)) {
            return true;
        }

        return false;
    }
    /**
     * 计算当月团队业务奖，参数重复，就不再注释了
     */
    public double groupPrize(String user, Date begin, Date end) {
        //计算当月团队业务奖金，先计算出团队总的业务额，然后再乘以1%，假设都是一个团队的
        double group = 0.0;

        for (double d : TempDB.mapMonthSaleMoney.values()) {
            group += d;
        }

        double prize = group * 0.01;
        System.out.println(user + "当月团队业务奖金" + prize);
        return prize;
    }
}
