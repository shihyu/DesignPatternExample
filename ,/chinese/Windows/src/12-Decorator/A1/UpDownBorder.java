public class UpDownBorder extends Border {
    private char borderChar;                        // 裝飾字元
    public UpDownBorder(Display display, char ch) {   // 以建構子指定Display和裝飾字元
        super(display);
        this.borderChar = ch;
    }
    public int getColumns() {                       // 字數同內容的字數
        return display.getColumns();
    }
    public int getRows() {                          // 行數要再加上內容上下的裝飾字元的行數
        return 1 + display.getRows() + 1;
    }
    public String getRowText(int row) {             // 指定該行的內容
        if (row == 0 || row == getRows() - 1) {
            return makeLine(borderChar, getColumns());
        } else {
            return display.getRowText(row - 1);
        }
    }
    private String makeLine(char ch, int count) { // 以字元ch，建立重複count次的連續字串
        StringBuffer buf = new StringBuffer();
        for (int i = 0; i < count; i++) {
            buf.append(ch);
        }
        return buf.toString();
    }
}
