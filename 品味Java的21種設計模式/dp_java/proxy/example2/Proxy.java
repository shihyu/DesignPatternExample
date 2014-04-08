package cn.javass.dp.proxy.example2;
/**
 * 代理对象
 */
public class Proxy implements Subject {
    /**
     * 持有被代理的具体的目标对象
     */
    private RealSubject realSubject = null;
    /**
     * 构造方法，传入被代理的具体的目标对象
     * @param realSubject 被代理的具体的目标对象
     */
    public Proxy(RealSubject realSubject) {
        this.realSubject = realSubject;
    }

    public void request() {
        //在转调具体的目标对象前，可以执行一些功能处理

        //转调具体的目标对象的方法
        realSubject.request();

        //在转调具体的目标对象后，可以执行一些功能处理
    }

}
