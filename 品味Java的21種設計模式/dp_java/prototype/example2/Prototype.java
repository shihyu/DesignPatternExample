package cn.javass.dp.prototype.example2;
/**
 * 声明一个克隆自身的接口
 */
public interface Prototype {
    /**
     * 克隆自身的方法
     * @return 一个从自身克隆出来的对象
     */
    public Prototype clone();
}

