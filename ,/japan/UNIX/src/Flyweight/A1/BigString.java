public class BigString {
    // 「大きな文字」の配列
    private BigChar[] bigchars;
    // コンストラクタ
    public BigString(String string) {
        init_shared(string);
    }
    // コンストラクタ
    public BigString(String string, boolean shared) {
        if (shared) {
            init_shared(string);
        } else {
            init_unshared(string);
        }
    }
    // 共有して初期化
    private void init_shared(String string) {
        bigchars = new BigChar[string.length()];
        BigCharFactory factory = BigCharFactory.getInstance();
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i] = factory.getBigChar(string.charAt(i)); 
        }
    }
    // 共有せず初期化
    private void init_unshared(String string) {
        bigchars = new BigChar[string.length()];
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i] = new BigChar(string.charAt(i));    
        }
    }
    // 表示
    public void print() {
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i].print();
        }
    }
}
