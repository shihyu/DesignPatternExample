public class IncrementalNumberGenerator extends NumberGenerator {
    private int number;                     // 目前數值
    private int end;                        // 結束數值（不含此值）
    private int inc;                        // 增加若干
    public IncrementalNumberGenerator(int start, int end, int inc) {
        this.number = start;
        this.end = end;
        this.inc = inc;
    }
    public int getNumber() {                // 取得數值
        return number;
    }
    public void execute() {
        while (number < end) {
            notifyObservers();
            number += inc;
        }
    }
}
