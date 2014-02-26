import framework.*;
import idcard.*;

public class Main {
    public static void main(String[] args) {
        Factory factory = new IDCardFactory();
        Product card1 = factory.create("åãèÈç_");
        Product card2 = factory.create("Ç∆ÇﬁÇÁ");
        Product card3 = factory.create("ç≤ì°â‘éq");
        card1.use();
        card2.use();
        card3.use();
    }
}
