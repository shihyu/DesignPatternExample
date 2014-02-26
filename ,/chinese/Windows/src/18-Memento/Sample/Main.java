import game.Memento;
import game.Gamer;

public class Main {
    public static void main(String[] args) {
        Gamer gamer = new Gamer(100);               // 一開始手邊金錢總額為100
        Memento memento = gamer.createMemento();    // 預先儲存最初狀態
        for (int i = 0; i < 100; i++) {
            System.out.println("==== " + i);        // 輸出次數
            System.out.println("現況:" + gamer);    // 輸出主人翁的目前狀態

            gamer.bet();    // 進行遊戲

            System.out.println("手邊金錢總額為" + gamer.getMoney() + "元。");

            // 決定如何處理Memento
            if (gamer.getMoney() > memento.getMoney()) {
                System.out.println("    （因為已經贏了不少，故先儲存目前狀態）");
                memento = gamer.createMemento();
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
}
