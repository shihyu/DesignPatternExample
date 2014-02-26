import game.Memento;
import game.Gamer;
import java.io.*;

public class Main {
    public static final String SAVEFILENAME = "game.dat";       
    public static void main(String[] args) {
        Gamer gamer = new Gamer(100);               // 一開始手邊金錢總額為100
        Memento memento = loadMemento();            // 從檔案載入
        if (memento != null) {
            System.out.println("從前回儲存的結果開始。");
            gamer.restoreMemento(memento);
        } else {
            System.out.println("重新開始。");
            memento = gamer.createMemento();
        }
        for (int i = 0; i < 100; i++) {
            System.out.println("==== " + i);        // 輸出次數
            System.out.println("現況:" + gamer);    // 輸出主人翁的目前狀態

            gamer.bet();    // 進行遊戲

            System.out.println("手邊金錢總額為" + gamer.getMoney() + "元。");

            // 決定如何處理Memento
            if (gamer.getMoney() > memento.getMoney()) {
                System.out.println("    （因為已經贏了不少，故先儲存目前狀態）");
                memento = gamer.createMemento();
                saveMemento(memento);   // 儲存到檔案
            } else if (gamer.getMoney() < memento.getMoney() / 2) {
                System.out.println("    （因為已經輸了很多，故恢復到前次狀態）");
                gamer.restoreMemento(memento);
            }

            // 等候
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
            }
            System.out.println("");
        }
    }
    public static void saveMemento(Memento memento) {   
        try {
            ObjectOutput out = new ObjectOutputStream(new FileOutputStream(SAVEFILENAME));
            out.writeObject(memento);
            out.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    public static Memento loadMemento() {               
        Memento memento = null;
        try {
            ObjectInput in = new ObjectInputStream(new FileInputStream(SAVEFILENAME));
            memento = (Memento)in.readObject();
            in.close();
        } catch (FileNotFoundException e) {
            System.out.println("" + e);
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
        return memento;
    }
}
