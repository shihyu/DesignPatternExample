import java.util.Random;

public class RandomNumberGenerator extends NumberGenerator {
    private Random random = new Random();   // —””­¶Ší
    private int number;                     // Œ»İ‚Ì”
    public int getNumber() {                // ”‚ğæ“¾‚·‚é
        return number;
    }
    public void execute() {
        for (int i = 0; i < 20; i++) {
            number = random.nextInt(50);
            notifyObservers();
        }
    }
}
