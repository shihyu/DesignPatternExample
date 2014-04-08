package cn.javass.dp.command.example8;

public class Client {
    public static void main(String[] args) {
        //准备要发出的命令
        Command cmd = new PrintService("退化的命令模式示例");
        //设置命令给持有者
        Invoker invoker = new Invoker();
        invoker.setCmd(cmd);

        //按下按钮，真正启动执行命令
        invoker.startPrint();
    }
}