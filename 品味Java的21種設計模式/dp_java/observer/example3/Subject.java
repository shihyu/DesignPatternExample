package cn.javass.dp.observer.example3;

import java.util.ArrayList;
import java.util.List;

/**
 * 目标对象，作为被观察者，使用推模型
 */
public class Subject {
    /**
     * 用来保存注册的观察者对象，也就是报纸的订阅者
     */
    private List<Observer> readers = new ArrayList<Observer>();
    /**
     * 报纸的读者需要先向报社订阅，先要注册
     * @param reader 报纸的读者
     * @return 是否注册成功
     */
    public void attach(Observer reader) {
        readers.add(reader);
    }
    /**
     * 报纸的读者可以取消订阅
     * @param reader 报纸的读者
     * @return 是否取消成功
     */
    public void detach(Observer reader) {
        readers.remove(reader);
    }
    /**
     * 当每期报纸印刷出来后，就要迅速的主动的被送到读者的手中，
     * 相当于通知读者，让他们知道
     * @param content 要主动推送的内容
     */
    protected void notifyObservers(String content) {
        for (Observer reader : readers) {
            reader.update(content);
        }
    }
}
