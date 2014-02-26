public class Trouble {
    private int number;             // 問題編號
    public Trouble(int number) {    // 發生問題
        this.number = number;
    }
    public int getNumber() {        // 取得問題編號
        return number;
    }
    public String toString() {      // 列印顯示問題的字串
        return "[Trouble " + number + "]";
    }
}
