import java.util.Iterator;

public abstract class Entry implements Acceptor {
    public abstract String getName();                                   // 取得檔名
    public abstract int getSize();                                      // 取得檔案容量
    public Entry add(Entry entry) throws FileTreatmentException {       // 新增進入點
        throw new FileTreatmentException();
    }
    public Iterator iterator() throws FileTreatmentException {    // 產生Iterator
        throw new FileTreatmentException();
    }
    public String toString() {                                          // 印出字串
        return getName() + " (" + getSize() + ")";
    }
}
