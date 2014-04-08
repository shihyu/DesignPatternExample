package cn.javass.dp.decorator.example2;

public class C3 {
    private A a = new A();
    private B b = new B();

    public void a1() {
        //转调A对象的功能
        a.a1();
    }
    public void b1() {
        //转调B对象的功能
        b.b1();
    }

    public void c11() {
        System.out.println("now in C3.c11");
    }
}
