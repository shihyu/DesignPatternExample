package cn.javass.dp.memento.example2;
import java.util.*;
/**
 * 负责保存备忘录的对象
 */
public class Caretaker {
    /**
     * 记录被保存的备忘录对象
     */
    private Memento memento = null;
    /**
     * 保存备忘录对象
     * @param memento 被保存的备忘录对象
     */
    public void saveMemento(Memento memento) {
        this.memento = memento;
    }
    /**
     * 获取被保存的备忘录对象
     * @return 被保存的备忘录对象
     */
    public Memento retriveMemento() {
        return this.memento;
    }
}

