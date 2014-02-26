public abstract class Display {
    public abstract int getColumns();               // 取得橫向的字數
    public abstract int getRows();                  // 取得直向的行數
    public abstract String getRowText(int row);     // 取得第row個字串
    public final void show() {                      // 列印所有內容
        for (int i = 0; i < getRows(); i++) {
            System.out.println(getRowText(i));
        }
    }
}
