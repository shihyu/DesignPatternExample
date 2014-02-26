package game; 
import java.util.Vector; 
import java.util.Iterator; 
import java.util.Random; 
 
public class Gamer { 
    private int money;                          // 手邊金錢總額 
    private Vector fruits = new Vector();       // 水果 
    private Random random = new Random();       // 亂數產生器 
    private static String[] fruitsname = {      // 水果名稱一覽表 
        "蘋果", "葡萄", "香蕉", "橘子", 
    }; 
    public Gamer(int money) {                   // 建構子 
        this.money = money; 
    } 
    public int getMoney() {                     // 取得目前的手邊金錢總額 
        return money; 
    } 
    public void bet() {                         // 下注…開始遊戲 
        int dice = random.nextInt(6) + 1;       // 擲骰子 
        if (dice == 1) {                        // 第1次…手邊金錢有變多 
            money += 100; 
            System.out.println("手邊金錢增加了。"); 
        } else if (dice == 2) {                 // 第2次…手邊金錢剩一半 
            money /= 2; 
            System.out.println("手邊金錢剩一半。"); 
        } else if (dice == 6) {                 // 第6次…得到水果 
            String f = getFruit(); 
            System.out.println("得到水果(" + f + ")。"); 
            fruits.add(f); 
        } else {                                // 其他…沒有發生什麼事 
            System.out.println("沒有發生什麼事。"); 
        } 
    } 
    public Memento createMemento() {            // 快照存證（snapshot） 
        Memento m = new Memento(money); 
        Iterator it = fruits.iterator(); 
        while (it.hasNext()) { 
            String f = (String)it.next(); 
            if (f.startsWith("好吃的")) {      // 只儲存好吃的水果 
                m.addFruit(f); 
            } 
        } 
        return m; 
    } 
    public void restoreMemento(Memento memento) {   // 進行復原 
        this.money = memento.money; 
        this.fruits = memento.getFruits(); 
    } 
    public String toString() {                      // 輸出成字串 
        return "[money = " + money + ", fruits = " + fruits + "]"; 
    } 
    private String getFruit() {                     // 得到1個水果 
        String prefix = ""; 
        if (random.nextBoolean()) { 
            prefix = "好吃的"; 
        } 
        return prefix + fruitsname[random.nextInt(fruitsname.length)]; 
    } 
}
