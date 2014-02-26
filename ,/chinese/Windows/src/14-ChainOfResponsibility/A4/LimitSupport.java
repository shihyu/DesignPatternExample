public class LimitSupport extends Support {
    private int limit;                              // 若小於此號碼則可解決問題
    public LimitSupport(String name, int limit) {   // 建構子
        super(name);
        this.limit = limit;
    }
    protected boolean resolve(Trouble trouble) {         // 解決的方法
        if (trouble.getNumber() < limit) {
            return true;
        } else {
            return false;
        }
    }
}
