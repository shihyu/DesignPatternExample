public interface Printable {
    public abstract void setPrinterName(String name);   // 命名
    public abstract String getPrinterName();            // 取得名稱
    public abstract void print(String string);          // 輸出字串（列印）
}
