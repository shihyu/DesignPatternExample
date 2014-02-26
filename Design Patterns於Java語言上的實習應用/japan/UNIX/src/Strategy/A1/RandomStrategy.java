import java.util.Random;

public class RandomStrategy implements Strategy {
    private Random random;
    public RandomStrategy(int seed) {
        random = new Random(seed);
    }
    public void study(boolean win) {
    }
    public Hand nextHand() {
        return Hand.getHand(random.nextInt(3));
    }
}
