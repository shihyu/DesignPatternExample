package cn.javass.dp.facade.example3;
/**
 * 代码生成子系统的外观对象
 */
public class Facade {
    /**
     * 客户端需要的，一个简单的调用代码生成的功能
     */
    public void generate() {
        new Presentation().generate();
        new Business().generate();
        new DAO().generate();
    }
}
