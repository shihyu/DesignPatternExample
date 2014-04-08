package cn.javass.dp.memento.example4;

public class Client {
    public static void main(String[] args) {
        //1：组装命令和接收者
        //创建接收者
        OperationApi operation = new Operation();
        //创建命令
        AddCommand addCmd = new AddCommand(5);
        SubstractCommand substractCmd = new SubstractCommand(3);
        //组装命令和接收者
        addCmd.setOperation(operation);
        substractCmd.setOperation(operation);

        //2：把命令设置到持有者，就是计算器里面
        Calculator calculator = new Calculator();
        calculator.setAddCmd(addCmd);
        calculator.setSubstractCmd(substractCmd);

        //3:模拟按下按钮，测试一下
        calculator.addPressed();
        System.out.println("一次加法运算后的结果为：" + operation.getResult());
        calculator.substractPressed();
        System.out.println("一次减法运算后的结果为：" + operation.getResult());

        //测试撤消
        calculator.undoPressed();
        System.out.println("撤销一次后的结果为：" + operation.getResult());
        calculator.undoPressed();
        System.out.println("再撤销一次后的结果为：" + operation.getResult());

        //测试恢复
        calculator.redoPressed();
        System.out.println("恢复操作一次后的结果为：" + operation.getResult());
        calculator.redoPressed();
        System.out.println("再恢复操作一次后的结果为：" + operation.getResult());
    }
}
