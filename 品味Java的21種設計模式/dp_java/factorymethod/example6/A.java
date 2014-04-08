package cn.javass.dp.factorymethod.example6;

public class A {
    /**
     * 等待被注入进来
     */
    private C c = null;
    /**
     * 注入资源C的方法
     * @param c 被注入的资源
     */
    public void setC(C c) {
        this.c = c;
    }
    public void t1() {
        //这里需要使用C类，可是又不让主动去创建C了，怎么办？
        //反正就要求从外部注入，这样更省心，
        //自己不用管怎么获取C，直接使用就好了
        c.tc();
    }
}
