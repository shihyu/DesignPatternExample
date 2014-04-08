package cn.javass.dp.observer.example1;

/**
 * 具体观察者对象，实现更新的方法，使自身的状态和目标的状态保持一致
 */
public class ConcreteObserver implements Observer {
    /**
     * 示意，观者者的状态
     */
    private String observerState;

    public void update(Subject subject) {
        // 具体的更新实现
        //这里可能需要更新观察者的状态，使其与目标的状态保持一致
        observerState = ((ConcreteSubject)subject).getSubjectState();
    }
}

