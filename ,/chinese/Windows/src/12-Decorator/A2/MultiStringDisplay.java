import java.util.Vector;

public class MultiStringDisplay extends Display {
    private Vector body = new Vector();             // ﹃
    private int columns = 0;                        // 程计
    public void add(String msg) {                   // 穝糤﹃
        body.add(msg);
        updateColumn(msg);
    }
    public int getColumns() {                       // 计
        return columns;
    }
    public int getRows() {                          // ︽计
        return body.size();
    }
    public String getRowText(int row) {             // 赣︽ず甧
        return (String)body.get(row);
    }
    private void updateColumn(String msg) {         // 穝计
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
    private String spaces(int count) {              // 玻ネフ
        StringBuffer buf = new StringBuffer();
        for (int i = 0; i < count; i++) {
            buf.append(' ');
        }
        return buf.toString();
    }
}
