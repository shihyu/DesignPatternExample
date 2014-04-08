package cn.javass.dp.composite.example4;

public class RecursiveTest {
    /**
     * 示意递归算法，求阶乘。这里只是简单的实现，只能实现求数值较小的阶乘，
     * 对于数据比较大的阶乘，比如求100的阶乘应该采用java.math.BigDecimal
     * 或是java.math.BigInteger
     * @param a 求阶乘的数值
     * @return 该数值的阶乘值
     */
    public int recursive(int a) {
        if (a == 1) {
            return 1;
        }

        return a * recursive(a - 1);
    }

    public static void main(String[] args) {
        RecursiveTest test = new RecursiveTest();
        int result = test.recursive(5);
        System.out.println("5的阶乘=" + result);
    }
}
