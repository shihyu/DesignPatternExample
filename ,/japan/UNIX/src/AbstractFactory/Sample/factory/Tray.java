package factory;
import java.util.Vector;

public abstract class Tray extends Item {
    protected Vector tray = new Vector();
    public Tray(String caption) {
        super(caption);
    }
    public void add(Item item) {
        tray.add(item);
    }
}
