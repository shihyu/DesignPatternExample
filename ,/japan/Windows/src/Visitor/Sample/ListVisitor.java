import java.util.Iterator;

public class ListVisitor extends Visitor {
    private String currentdir = "";                         // 現在注目しているディレクトリ名
    public void visit(File file) {                  // ファイルを訪問したときに呼ばれる
        System.out.println(currentdir + "/" + file);
    }
    public void visit(Directory directory) {   // ディレクトリを訪問したときに呼ばれる
        System.out.println(currentdir + "/" + directory);
        String savedir = currentdir;
        currentdir = currentdir + "/" + directory.getName();
        Iterator it = directory.iterator();
        while (it.hasNext()) {
            Entry entry = (Entry)it.next();
            entry.accept(this);
        }
        currentdir = savedir;
    }
}
