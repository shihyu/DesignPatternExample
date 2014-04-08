package cn.javass.dp.state.example6;
import java.util.*;
public class TestDB {
    public static Map map = new HashMap();
    static {
        Thread t = new Thread(new MemoryDB());
        t.start();
    }
}
class MemoryDB implements Runnable {

    public void run() {
        while (true) {
            //一直运行着
            try {
                Thread.sleep(1000L);
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
    }
}
