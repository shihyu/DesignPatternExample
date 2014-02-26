public class FullBorder extends Border {
    public FullBorder(Display display) {
        super(display);
    }
    public int getColumns() {                   // 字數＝內容字數＋內容兩邊的裝飾字元
        return 1 + display.getColumns() + 1;
    }
    public int getRows() {                      // 行數＝內容行數＋上下的裝飾字元
        return 1 + display.getRows() + 1;
    }
    public String getRowText(int row) {         // 指定該行的內容
        if (row == 0) {                                                 // 外框頂端
            return "+" + makeLine('-', display.getColumns()) + "+";
        } else if (row == display.getRows() + 1) {                      // 外框底部
            return "+" + makeLine('-', display.getColumns()) + "+";
        } else {                                                        // 其他部分
            return "|" + display.getRowText(row - 1) + "|";
        }
    }
    private String makeLine(char ch, int count) {         // 以字元ch，建立重複count次的連續字串
        StringBuffer buf = new StringBuffer();
        for (int i = 0; i < count; i++) {
            buf.append(ch);
        }
        return buf.toString();
    }
}
