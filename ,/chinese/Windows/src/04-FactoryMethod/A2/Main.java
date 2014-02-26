import framework.*;
import idcard.*;

public class Main {
    public static void main(String[] args) {
        Factory factory = new IDCardFactory();
        Product card1 = factory.create("µ²«°¯E");
        Product card2 = factory.create("¤á§ø");
        Product card3 = factory.create("¦õÃÃªá¤l");
        card1.use();
        card2.use();
        card3.use();
    }
}
