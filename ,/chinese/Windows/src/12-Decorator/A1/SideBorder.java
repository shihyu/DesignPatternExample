public class SideBorder extends Border {
    private char borderChar;                        // 裝飾字元
    public SideBorder(Display display, char ch) {   // 以建構子指定Display和裝飾字元 
        super(display);
        this.borderChar = ch;
    }
    public int getColumns() {                       // 字數要再加上內容兩邊的裝飾字元
        return 1 + display.getColumns() + 1;
    }
    public int getRows() {                          // 行數同內容的行數
        return display.getRows();
    }
    public String getRowText(int row) {             // 指定該行的內容即為在內容之指定行的兩邊
						    // 加上裝飾字元

        return borderChar + display.getRowText(row) + borderChar;
    }
}
