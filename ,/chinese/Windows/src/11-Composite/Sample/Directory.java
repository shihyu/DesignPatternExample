import java.util.Iterator; 
import java.util.Vector; 
 
public class Directory extends Entry { 
    private String name;                      // 目錄名稱 
    private Vector directory = new Vector();  // 目錄進入點的集合 
    public Directory(String name) {           // 建構子 
        this.name = name; 
    } 
    public String getName() {                 // 取得目錄名稱 
        return name; 
    } 
    public int getSize() {                    // 取得目錄容量 
        int size = 0; 
        Iterator it = directory.iterator(); 
        while (it.hasNext()) { 
            Entry entry = (Entry)it.next(); 
            size += entry.getSize(); 
        } 
        return size; 
    } 
    public Entry add(Entry entry) {          // 新增進入點 
        directory.add(entry); 
        return this; 
    } 
    protected void printList(String prefix) {       // 進入點的總覽 
        System.out.println(prefix + "/" + this); 
        Iterator it = directory.iterator(); 
        while (it.hasNext()) { 
            Entry entry = (Entry)it.next(); 
            entry.printList(prefix + "/" + name); 
        } 
    } 
} 

