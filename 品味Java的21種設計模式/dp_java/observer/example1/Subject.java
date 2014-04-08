package cn.javass.dp.observer.example1;

import java.util.*;
/**
 * 目标对象，它知道观察它的观察者，并提供注册和删除观察者的接口
 */
public class Subject {
    /**
     * 用来保存注册的观察者对象
     */
    private List<Observer> observers = new ArrayList<Observer>();
    /**
     * 注册观察者对象
     * @param observer 观察者对象
     */
    public void attach(Observer observer) {
        observers.add(observer);
    }
    /**
     * 删除观察者对象
     * @param observer 观察者对象
     */
    public void detach(Observer observer) {
        observers.remove(observer);
    }
    /**
     * 通知所有注册的观察者对象
     */
    protected void notifyObservers() {
        for (Observer observer : observers) {
            observer.update(this);
        }
    }
}

