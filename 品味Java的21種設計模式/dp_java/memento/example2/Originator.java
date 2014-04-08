package cn.javass.dp.memento.example2;

/**
 * 原发器对象
 */
public class Originator {
    /**
     * 示意，表示原发器的状态
     */
    private String state = "";
    /**
     * 创建保存原发器对象的状态的备忘录对象
     * @return 创建好的备忘录对象
     */
    public Memento createMemento() {
        return new MementoImpl(state);
    }
    /**
     * 重新设置原发器对象的状态，让其回到备忘录对象记录的状态
     * @param memento 记录有原发器状态的备忘录对象
     */
    public void setMemento(Memento memento) {
        MementoImpl mementoImpl = (MementoImpl)memento;
        this.state = mementoImpl.getState();
    }
    /**
     * 真正的备忘录对象，实现备忘录窄接口
     * 实现成私有的内部类，不让外部访问
     */
    private static class MementoImpl implements Memento {
        /**
         * 示意，表示需要保存的状态
         */
        private String state = "";
        public MementoImpl(String state) {
            this.state = state;
        }
        public String getState() {
            return state;
        }
    }

}

