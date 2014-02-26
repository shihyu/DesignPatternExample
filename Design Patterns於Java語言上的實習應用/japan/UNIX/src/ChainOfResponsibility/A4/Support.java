public abstract class Support {
    private String name;                  // このトラブル解決者の名前
    private Support next;                 // たらい回しの先
    public Support(String name) {         // トラブル解決者の生成
        this.name = name;
    }
    public Support setNext(Support next) {  // たらい回しの先を設定
        this.next = next;
        return next;
    }
    public final void support(Trouble trouble) {          
        for (Support obj = this; true; obj = obj.next) {
            if (obj.resolve(trouble)) {
                obj.done(trouble);
                break;
            } else if (obj.next == null) {
                obj.fail(trouble);
                break;
            }
        }
    }
    public String toString() {              // 文字列表現
        return "[" + name + "]";
    }
    protected abstract boolean resolve(Trouble trouble); // 解決用メソッド
    protected void done(Trouble trouble) {  // 解決
        System.out.println(trouble + " is resolved by " + this + ".");
    }
    protected void fail(Trouble trouble) {  // 未解決
        System.out.println(trouble + " cannot be resolved.");
    }
}
