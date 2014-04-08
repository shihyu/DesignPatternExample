package cn.javass.dp.command.example8;

public class PrintService implements Command {
    /**
     * 要输出的内容
     */
    private String str = "";
    /**
     * 构造方法，传入要输出的内容
     * @param s 要输出的内容
     */
    public PrintService(String s) {
        str = s;
    }

    public void execute() {
        System.out.println("打印的内容为=" + str);
    }
}