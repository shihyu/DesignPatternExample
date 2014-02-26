public abstract class Entry {
     public abstract String getName();					// 取得檔名
     public abstract int getSize();					// 取得檔案容量
     public Entry add(Entry entry) throws FileTreatmentException {	// 新增進入點
         throw new FileTreatmentException();
     }
     public void printList() {						// 輸出總覽
         printList("");
     }
     protected abstract void printList(String prefix);			// 在前面加上prefix後
									// 輸出總覽
     public String toString() {						// 字串輸出格式
         return getName() + " (" + getSize() + ")";
     }
} 