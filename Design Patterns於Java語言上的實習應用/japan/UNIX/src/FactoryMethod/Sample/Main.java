import framework.*;
import idcard.*;

public class Main {
    public static void main(String[] args) {
        Factory factory = new IDCardFactory();
        Product card1 = factory.create("·ë¾ë¹À");
        Product card2 = factory.create("¤È¤à¤é");
        Product card3 = factory.create("º´Æ£²Ö»Ò");
        card1.use();
        card2.use();
        card3.use();
    }
}
