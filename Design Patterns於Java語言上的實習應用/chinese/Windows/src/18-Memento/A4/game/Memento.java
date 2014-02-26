package game;
import java.io.*;
import java.util.Vector;

public class Memento implements Serializable {  
    int money;                              // 手邊金錢總額
    Vector fruits;                          // 水果
    public int getMoney() {                 // 取得手邊金錢總額（narrow interface）
        return money;
    }
    Memento(int money) {                    // 建構子（wide interface）
        this.money = money;
        this.fruits = new Vector();
    }
    void addFruit(String fruit) {           // 新增水果（wide interface）
        fruits.add(fruit);
    }
    Vector getFruits() {
         return (Vector)fruits.clone();
    }
}
