public class SpecialSupport extends Support {
    private int number;                                 // 只能解決此號碼的問題
    public SpecialSupport(String name, int number) {    // 建構子
        super(name);
        this.number = number;
    }
    protected boolean resolve(Trouble trouble) {     // 解決的方法
        if (trouble.getNumber() == number) {
            return true;
        } else {
            return false;
        }
    }
}
