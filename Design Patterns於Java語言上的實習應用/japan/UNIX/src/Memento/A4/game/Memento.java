package game;
import java.io.*;
import java.util.Vector;

public class Memento implements Serializable {  
    int money;                              // 所持金
    Vector fruits;                          // フルーツ
    public int getMoney() {                 // 所持金を得る（narrow interface）
        return money;
    }
    Memento(int money) {                    // コンストラクタ（wide interface）
        this.money = money;
        this.fruits = new Vector();
    }
    void addFruit(String fruit) {           // フルーツを追加する（wide interface)
        fruits.add(fruit);
    }
}
