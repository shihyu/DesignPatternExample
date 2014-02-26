import game.Memento;
import game.Gamer;
import java.io.*;

public class Main {
    public static final String SAVEFILENAME = "game.dat";       
    public static void main(String[] args) {
        Gamer gamer = new Gamer(100);               // 最初の所持金は100
        Memento memento = loadMemento();            // ファイルからロード   
        if (memento != null) {
            System.out.println("前回保存した結果からスタートします。");
            gamer.restoreMemento(memento);
        } else {
            System.out.println("新規にスタートします。");
            memento = gamer.createMemento();
        }
        for (int i = 0; i < 100; i++) {
            System.out.println("==== " + i);        // 回数表示
            System.out.println("現状:" + gamer);    // 現在の主人公の状態表示

            gamer.bet();    // ゲームを進める

            System.out.println("所持金は" + gamer.getMoney() + "円になりました。");

            // Mementoの取り扱いの決定
            if (gamer.getMoney() > memento.getMoney()) {
                System.out.println("    （だいぶ増えたので、現在の状態を保存しておこう）");
                memento = gamer.createMemento();
                saveMemento(memento);   // ファイルに保存   
            } else if (gamer.getMoney() < memento.getMoney() / 2) {
                System.out.println("    （だいぶ減ったので、以前の状態に復帰しよう）");
                gamer.restoreMemento(memento);
            }

            // 時間待ち
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
