public class Printer implements Printable {
    private String name;
    public Printer() {
        heavyJob("正在產生Printer的物件個體");
    }
    public Printer(String name) {                   // 建構子
        this.name = name;
        heavyJob("正在產生Printer的物件個體(" + name + ")");
    }
    public void setPrinterName(String name) {       // 命名
        this.name = name;
    }
    public String getPrinterName() {                // 取得名稱
        return name;
    }
    public void print(String string) {              // 輸出名稱
        System.out.println("=== " + name + " ===");
        System.out.println(string);
    }
    private void heavyJob(String msg) {             // 較重的工作（假設）
        System.out.print(msg);
        for (int i = 0; i < 5; i++) {
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
            }
            System.out.print(".");
        }
        System.out.println("完成。");
    }
}
