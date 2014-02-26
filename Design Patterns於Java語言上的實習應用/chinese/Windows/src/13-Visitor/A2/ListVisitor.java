import java.util.Iterator;

public class ListVisitor extends Visitor {
    private String currentdir = "";                         // 目前所在的目錄名稱
    public void visit(File file) {                  // 訪問檔案時即呼叫
        System.out.println(currentdir + "/" + file);
    }
    public void visit(Directory directory) {   // 訪問目錄時即呼叫
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
