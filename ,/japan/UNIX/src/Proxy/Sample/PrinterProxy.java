public class PrinterProxy implements Printable {
    private String name;            // 名前
    private Printer real;           // 「本人」
    public PrinterProxy() {
    }
    public PrinterProxy(String name) {      // コンストラクタ
        this.name = name;
    }
    public synchronized void setPrinterName(String name) {  // 名前の設定
        if (real != null) {
            real.setPrinterName(name);  // 「本人」にも設定する
        }
        this.name = name;
    }
    public String getPrinterName() {    // 名前の取得
        return name;
    }
    public void print(String string) {  // 表示
        realize();
        real.print(string);
    }
    private synchronized void realize() {   // 「本人」を生成
        if (real == null) {
            real = new Printer(name);
        }
    }
}
