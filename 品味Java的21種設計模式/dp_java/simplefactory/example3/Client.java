package cn.javass.dp.simplefactory.example3;
/**
 * 客户端：测试使用Api接口
 */
public class Client {
    public static void main(String[] args) {
        //重要改变，没有new Impl()了，取而代之Factory.createApi()
        Api api = Factory.createApi();
        api.test1("哈哈，不要紧张，只是个测试而已！");
    }
}
