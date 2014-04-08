package cn.javass.dp.memento.example3;

public class Client {
    public static void main(String[] args) {
        // 创建模拟运行流程的对象
        FlowAMock mock = new FlowAMock("TestFlow");
        //运行流程的第一个阶段
        mock.runPhaseOne();

        //创建一个管理者
        FlowAMementoCareTaker careTaker = new FlowAMementoCareTaker();
        //创建此时对象的备忘录对象，并保存到管理者对象那里，后面要用
        FlowAMockMemento memento = mock.createMemento();
        careTaker.saveMemento(memento);

        //按照方案一来运行流程后半部分
        mock.schema1();

        //从管理者获取备忘录对象，然后设置回去，
        //让模拟运行流程的对象自己恢复自己的内部状态
        mock.setMemento(careTaker.retriveMemento());

        //按照方案二来运行流程后半部分
        mock.schema2();
    }
}
