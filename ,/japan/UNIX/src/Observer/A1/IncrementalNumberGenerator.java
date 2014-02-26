public class IncrementalNumberGenerator extends NumberGenerator {
    private int number;                     // 現在の数
    private int end;                        // 終了値（この値を含まない）
    private int inc;                        // 増加分
    public IncrementalNumberGenerator(int start, int end, int inc) {
        this.number = start;
        this.end = end;
        this.inc = inc;
    }
    public int getNumber() {                // 数を取得する
        return number;
    }
    public void execute() {
        while (number < end) {
            notifyObservers();
            number += inc;
        }
    }
}
