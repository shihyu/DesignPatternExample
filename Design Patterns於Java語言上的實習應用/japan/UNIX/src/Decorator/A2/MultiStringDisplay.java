import java.util.Vector;

public class MultiStringDisplay extends Display {
    private Vector body = new Vector();             // 表示文字列
    private int columns = 0;                        // 最大文字数
    public void add(String msg) {                   // 文字列追加
        body.add(msg);
        updateColumn(msg);
    }
    public int getColumns() {                       // 文字数
        return columns;
    }
    public int getRows() {                          // 行数
        return body.size();
    }
    public String getRowText(int row) {             // 行の内容
        return (String)body.get(row);
    }
    private void updateColumn(String msg) {         // 文字数を更新する
        if (msg.getBytes().length > columns) {
            columns = msg.getBytes().length;
        }
        for (int row = 0; row < body.size(); row++) {
            int fills = columns - ((String)body.get(row)).getBytes().length;
            if (fills > 0) {
                body.set(row, body.get(row) + spaces(fills));
            }
        }
    }
    private String spaces(int count) {              // 空白作成
        StringBuffer buf = new StringBuffer();
        for (int i = 0; i < count; i++) {
            buf.append(' ');
        }
        return buf.toString();
    }
}
