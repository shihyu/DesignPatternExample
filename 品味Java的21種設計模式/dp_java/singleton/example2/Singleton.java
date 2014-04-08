package cn.javass.dp.singleton.example2;

/**
 * 单例示例
 */
public class Singleton {
    /**
     * 定义一个变量来存储创建好的类实例
     */
    private static Singleton uniqueInstance = null;
    /**
     * 私有化构造方法，好在内部控制创建实例的数目
     */
    private Singleton() {
        //
    }
    /**
     * 定义一个方法来为客户端提供类实例
     * @return 一个Singleton的实例
     */
    public static synchronized Singleton getInstance() {
        //判断存储实例的变量是否有值
        if (uniqueInstance == null) {
            //如果没有，就创建一个类实例，并把值赋值给存储类实例的变量
            uniqueInstance = new Singleton();
        }

        //如果有值，那就直接使用
        return uniqueInstance;
    }
    /**
     * 示意方法，单例可以有自己的操作
     */
    public void singletonOperation() {
        //功能处理
    }
    /**
     * 示意属性，单例可以有自己的属性
     */
    private String singletonData;
    /**
     * 示意方法，让外部通过这些方法来访问属性的值
     * @return 属性的值
     */
    public String getSingletonData() {
        return singletonData;
    }
}
