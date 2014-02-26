import java.util.Random;

public class RandomNumberGenerator extends NumberGenerator {
    private Random random = new Random();   // 亂數產生器
    private int number;                     // 目前數值
    public int getNumber() {                // 取得數值
        return number;
    }
    public void execute() {
        for (int i = 0; i < 20; i++) {
            number = random.nextInt(50);
            notifyObservers();
        }
    }
}
