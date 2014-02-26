public class StringDisplay extends Display {
    private String string;                          // ﹃
    public StringDisplay(String string) {           // ま计﹚﹃
        this.string = string;
    }
    public int getColumns() {                       // 计
        return string.getBytes().length;
    }
    public int getRows() {                          // ︽计1
        return 1;
    }
    public String getRowText(int row) {             // 度row0肚
        if (row == 0) {
            return string;
        } else {
            return null;
        }
    }
}
