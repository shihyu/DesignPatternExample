package cn.javass.dp.adapter.example1;
/**
 * 适配器
 */
public class Adapter implements Target {
    /**
     * 持有需要被适配的接口对象
     */
    private Adaptee adaptee;
    /**
     * 构造方法，传入需要被适配的对象
     * @param adaptee 需要被适配的对象
     */
    public Adapter(Adaptee adaptee) {
        this.adaptee = adaptee;
    }

    public void request() {
        //可能转调已经实现了的方法，进行适配
        adaptee.specificRequest();
    }
}

