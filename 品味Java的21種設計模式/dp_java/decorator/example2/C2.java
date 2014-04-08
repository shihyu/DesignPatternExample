package cn.javass.dp.decorator.example2;

public class C2 {
    /**
     * 创建A对象的实例
     */
    private A a = new A();

    public void a1() {
        //转调A对象的功能
        a.a1();
    }
    public void c11() {
        System.out.println("now in C2.c11");
    }
}
