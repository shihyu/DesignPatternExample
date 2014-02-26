public class OddSupport extends Support {
    public OddSupport(String name) {                // 建構子
        super(name);
    }
    protected boolean resolve(Trouble trouble) {    // 解決的方法
        if (trouble.getNumber() % 2 == 1) {
            return true;
        } else {
            return false;
        }
    }
}
