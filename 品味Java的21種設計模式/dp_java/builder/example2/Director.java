package cn.javass.dp.builder.example2;
/**
 * 指导者，指导使用构建器的接口来构建产品的对象
 */
public class Director {
    /**
     * 持有当前需要使用的构建器对象
     */
    private Builder builder;
    /**
     * 构造方法，传入构建器对象
     * @param builder 构建器对象
     */
    public Director(Builder builder) {
        this.builder = builder;
    }
    /**
     * 示意方法，指导构建器构建最终的产品对象
     */
    public void construct() {
        //通过使用构建器接口来构建最终的产品对象
        builder.buildPart();
    }
}