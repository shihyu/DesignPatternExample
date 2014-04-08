package cn.javass.dp.factorymethod.example6;

public class A2 extends A1 {
    protected C1 createC1() {
        //真正的选择具体实现，并创建对象
        return new C2();
    }
}
