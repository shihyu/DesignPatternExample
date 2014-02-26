public class BigString {
    // 大型文字」的陣列
    private BigChar[] bigchars;
    // 建構子
    public BigString(String string) {
        init_shared(string);
    }
    // 建構子
    public BigString(String string, boolean shared) {
        if (shared) {
            init_shared(string);
        } else {
            init_unshared(string);
        }
    }
    // 共用且初始化
    private void init_shared(String string) {
        bigchars = new BigChar[string.length()];
        BigCharFactory factory = BigCharFactory.getInstance();
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i] = factory.getBigChar(string.charAt(i)); 
        }
    }
    // 不共用的初始化
    private void init_unshared(String string) {
        bigchars = new BigChar[string.length()];
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i] = new BigChar(string.charAt(i));    
        }
    }
    // 輸出到畫面上
    public void print() {
        for (int i = 0; i < bigchars.length; i++) {
            bigchars[i].print();
        }
    }
}
