package idcard;
import framework.*;
import java.util.*;

public class IDCardFactory extends Factory {
    private Hashtable database = new Hashtable();
    private int serial = 100;
    protected synchronized Product createProduct(String owner) {
        return new IDCard(owner, serial++);
    }
    protected void registerProduct(Product product) {
        IDCard card = (IDCard)product;
        database.put(card.getOwner(), new Integer(card.getSerial()));
    }
    public Hashtable getDatabase() {
        return database;
    }
}
