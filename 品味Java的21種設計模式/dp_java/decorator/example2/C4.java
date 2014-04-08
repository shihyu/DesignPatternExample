package cn.javass.dp.decorator.example2;

public class C4 {
    //示例直接在属性上创建需要组合的对象
    private A a = new A();
    //示例通过外部传入需要组合的对象
    private B b = null;
    public void setB(B b) {
        this.b = b;
    }
    public void a1() {
        //转调A对象的功能
        a.a1();
    }
    public void b1() {
        //转调B对象的功能
        b.b1();
    }
    public void c11() {
        System.out.println("now in C4.c11");
    }
}
