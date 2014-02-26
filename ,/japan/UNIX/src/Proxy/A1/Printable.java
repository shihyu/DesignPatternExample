public interface Printable {
    public abstract void setPrinterName(String name);   // 名前の設定
    public abstract String getPrinterName();            // 名前の取得
    public abstract void print(String string);          // 文字列表示（プリントアウト）
}
