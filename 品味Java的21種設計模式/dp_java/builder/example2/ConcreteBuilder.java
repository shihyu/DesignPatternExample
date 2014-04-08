package cn.javass.dp.builder.example2;
/**
 * 具体的构建器实现对象
 */
public class ConcreteBuilder implements Builder {
    /**
     * 构建器最终构建的产品对象
     */
    private Product resultProduct;
    /**
     * 获取构建器最终构建的产品对象
     * @return 构建器最终构建的产品对象
     */
    public Product getResult() {
        return resultProduct;
    }
    public void buildPart() {
        //构建某个部件的功能处理
    }
}