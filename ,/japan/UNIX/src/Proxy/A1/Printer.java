public class Printer implements Printable {
    private String name;
    public Printer() {
        heavyJob("Printerのインスタンスを生成中");
    }
    public Printer(String name) {                   // コンストラクタ
        this.name = name;
        heavyJob("Printerのインスタンス(" + name + ")を生成中");
    }
    public void setPrinterName(String name) {       // 名前の設定
        this.name = name;
    }
    public String getPrinterName() {                // 名前の取得
        return name;
    }
    public void print(String string) {              // 名前つきで表示
        System.out.println("=== " + name + " ===");
        System.out.println(string);
    }
    private void heavyJob(String msg) {             // 重い作業（のつもり）
        System.out.print(msg);
        for (int i = 0; i < 5; i++) {
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
            }
            System.out.print(".");
        }
        System.out.println("完了。");
    }
}
