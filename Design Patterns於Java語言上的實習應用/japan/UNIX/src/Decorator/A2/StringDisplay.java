public class StringDisplay extends Display {
    private String string;                          // 表示文字列
    public StringDisplay(String string) {           // 引数で表示文字列を指定
        this.string = string;
    }
    public int getColumns() {                       // 文字数
        return string.getBytes().length;
    }
    public int getRows() {                          // 行数は1
        return 1;
    }
    public String getRowText(int row) {             // rowが0のときのみ返す
        if (row == 0) {
            return string;
        } else {
            return null;
        }
    }
}
