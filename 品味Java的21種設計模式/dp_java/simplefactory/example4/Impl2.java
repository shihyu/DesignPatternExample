package cn.javass.dp.simplefactory.example4;
/**
 * 对接口的一种实现
 */
public class Impl2 implements Api {

    public void test1(String s) {
        System.out.println("Now In Impl2. The input s==" + s);
    }
}
