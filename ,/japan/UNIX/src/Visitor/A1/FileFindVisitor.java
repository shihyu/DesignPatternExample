import java.util.Iterator;
import java.util.Vector;

public class FileFindVisitor extends Visitor {
    private String filetype;
    private Vector found = new Vector();
    public FileFindVisitor(String filetype) {           // ".txt"のように拡張子を.付きで指定
        this.filetype = filetype;
    }
    public Iterator getFoundFiles() {                   // 見つかったファイルを得る
        return found.iterator();
    }
    public void visit(File file) {                  // ファイルを訪問したときに呼ばれる
        if (file.getName().endsWith(filetype)) {
            found.add(file);
        }
    }
    public void visit(Directory directory) {   // ディレクトリを訪問したときに呼ばれる
        Iterator it = directory.iterator();
        while (it.hasNext()) {
            Entry entry = (Entry)it.next();
            entry.accept(this);
        }
    }
}
