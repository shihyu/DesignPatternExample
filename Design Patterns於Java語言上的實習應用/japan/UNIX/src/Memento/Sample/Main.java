import game.Memento;
import game.Gamer;

public class Main {
    public static void main(String[] args) {
        Gamer gamer = new Gamer(100);               // 最初の所持金は100
        Memento memento = gamer.createMemento();    // 最初の状態を保存しておく
        for (int i = 0; i < 100; i++) {
            System.out.println("==== " + i);        // 回数表示
            System.out.println("現状:" + gamer);    // 現在の主人公の状態表示

            gamer.bet();    // ゲームを進める

            System.out.println("所持金は" + gamer.getMoney() + "円になりました。");

            // Mementoの取り扱いの決定
            if (gamer.getMoney() > memento.getMoney()) {
                System.out.println("    （だいぶ増えたので、現在の状態を保存しておこう）");
                memento = gamer.createMemento();
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
}
