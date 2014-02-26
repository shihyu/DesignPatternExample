public abstract class Support {
    private String name;                    // 問題解決者的名稱
    private Support next;                   // 轉送位置
    public Support(String name) {           // 產生問題解決者
        this.name = name;
    }
    public Support setNext(Support next) {  // 設定轉送位置
        this.next = next;
        return next;
    }
    public final void support(Trouble trouble) {  // 解決問題的步驟
        if (resolve(trouble)) {
            done(trouble);
        } else if (next != null) {
            next.support(trouble);
        } else {
            fail(trouble);
        }
    }
    public String toString() {              // 列印字串
        return "[" + name + "]";
    }
    protected abstract boolean resolve(Trouble trouble); // 解決的方法
    protected void done(Trouble trouble) {  // 已解決
        System.out.println(trouble + " is resolved by " + this + ".");
    }
    protected void fail(Trouble trouble) {  // 尚未解決
        System.out.println(trouble + " cannot be resolved.");
    }
}
