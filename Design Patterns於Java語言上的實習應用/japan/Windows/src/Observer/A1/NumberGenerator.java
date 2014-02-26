import java.util.Vector;
import java.util.Iterator;

public abstract class NumberGenerator {
    private Vector observers = new Vector();        // Observer‚½‚¿‚ğ•Û
    public void addObserver(Observer observer) {    // Observer‚ğ’Ç‰Á
        observers.add(observer);
    }
    public void deleteObserver(Observer observer) { // Observer‚ğíœ
        observers.remove(observer);
    }
    public void notifyObservers() {               // Observer‚Ö’Ê’m
        Iterator it = observers.iterator();
        while (it.hasNext()) {
            Observer o = (Observer)it.next();
            o.update(this);
        }
    }
    public abstract int getNumber();                // ”‚ğæ“¾‚·‚é
    public abstract void execute();                 // ”‚ğ¶¬‚·‚é
}
