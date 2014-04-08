package cn.javass.dp.command.example9;

public class Client {
    public static void main(String[] args) {
        //准备要发出的命令，没有具体实现类了
        Command cmd = new Command() {
            private String str = "";
            public void setStr(String s) {
                str = s;
            }

            public void execute() {
                System.out.println("打印的内容为=" + str);
            }
        };
        cmd.setStr("退化的命令模式类似于Java回调的示例");

        //这个时候的Invoker或许该称为服务了
        Invoker invoker = new Invoker();
        //按下按钮，真正启动执行命令
        invoker.startPrint(cmd);
    }
}