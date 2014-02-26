import java.util.Vector;
import java.util.Iterator;

public abstract class NumberGenerator {
    private Vector observers = new Vector();        // Observerたちを保持
    public void addObserver(Observer observer) {    // Observerを追加
        observers.add(observer);
    }
    public void deleteObserver(Observer observer) { // Observerを削除
        observers.remove(observer);
    }
    public void notifyObservers() {               // Observerへ通知
        Iterator it = observers.iterator();
        while (it.hasNext()) {
            Observer o = (Observer)it.next();
            o.update(this);
        }
    }
    public abstract int getNumber();                // 数を取得する
    public abstract void execute();                 // 数を生成する
}
