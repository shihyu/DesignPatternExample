package cn.javass.dp.decorator.example1;

public class Client {
    public static void main(String[] args) {
        //先创建计算奖金的对象
        Prize p = new Prize();

        //日期对象都没有用上，所以传null就可以了
        double zs = p.calcPrize("张三", null, null);
        System.out.println("==========张三应得奖金：" + zs);
        double ls = p.calcPrize("李四", null, null);
        System.out.println("==========李四应得奖金：" + ls);
        double ww = p.calcPrize("王五", null, null);
        System.out.println("==========王经理应得奖金：" + ww);
    }
}
