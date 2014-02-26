import java.util.Vector;
import java.util.Iterator;

class AcceptorVector extends Vector implements Acceptor {
    public void accept(Visitor v) {
        Iterator it = iterator();
        while (it.hasNext()) {
            Acceptor a = (Acceptor)it.next();
            a.accept(v);
        }
    }
}
