public abstract class AbstractDisplay { // 抽象類別AbstractDisplay
    public abstract void open();        // 由子類別實作的抽象方法（1）open
    public abstract void print();       // 由子類別實作的抽象方法（2）print
    public abstract void close();       // 由子類別實作的抽象方法（3）close
    public final void display() {       // 在此抽象類別中實作的方法display
        open();                         // 先open…
        for (int i = 0; i < 5; i++) {   // 反覆5次print…
            print();
        }
        close();         // …最後close起來。這就是實作display方法時的內容
    }
}
