import java.util.Hashtable;

public class BigCharFactory {
    // 管理現有的BigChar的物件個體
    private Hashtable pool = new Hashtable();
    // Singleton Pattern
    private static BigCharFactory singleton = new BigCharFactory();
    // 建構子
    private BigCharFactory() {
    }
    // 取得唯一的物件個體
    public static BigCharFactory getInstance() {
        return singleton;
    }
    // 產生（共用）BigChar的物件個體
    public synchronized BigChar getBigChar(char charname) {
        BigChar bc = (BigChar)pool.get("" + charname);
        if (bc == null) {
            bc = new BigChar(charname); 	// 在此產生BigChar的物件個體
            pool.put("" + charname, bc);
        }
        return bc;
    }
}
