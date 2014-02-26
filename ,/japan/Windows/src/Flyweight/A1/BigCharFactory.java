import java.util.Hashtable;

public class BigCharFactory {
    // すでに作ったBigCharのインスタンスを管理
    private Hashtable pool = new Hashtable();
    // Singletonパターン
    private static BigCharFactory singleton = new BigCharFactory();
    // コンストラクタ
    private BigCharFactory() {
    }
    // 唯一のインスタンスを得る
    public static BigCharFactory getInstance() {
        return singleton;
    }
    // BigCharのインスタンス生成（共有）
    public synchronized BigChar getBigChar(char charname) {
        BigChar bc = (BigChar)pool.get("" + charname);
        if (bc == null) {
            bc = new BigChar(charname); // ここでBigCharのインスタンスを生成
            pool.put("" + charname, bc);
        }
        return bc;
    }
}
