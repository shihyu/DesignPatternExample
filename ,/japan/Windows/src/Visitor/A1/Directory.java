import java.util.Iterator;
import java.util.Vector;

public class Directory extends Entry {
    private String name;                    // ディレクトリの名前
    private Vector dir = new Vector();      // ディレクトリエントリの集合
    public Directory(String name) {         // コンストラクタ
        this.name = name;
    }
    public String getName() {               // 名前を得る
        return name;
    }
    public int getSize() {                  // サイズを得る
        int size = 0;
        Iterator it = dir.iterator();
        while (it.hasNext()) {
            Entry entry = (Entry)it.next();
            size += entry.getSize();
        }
        return size;
    }
    public Entry add(Entry entry) {         // エントリの追加
        dir.add(entry);
        return this;
    }
    public Iterator iterator() {      // Iteratorの生成
        return dir.iterator();
    }
    public void accept(Visitor v) {         // 訪問者の受け入れ
        v.visit(this);
    }
}
