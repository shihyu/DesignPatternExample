package cn.javass.dp.memento.example4;
/**
 * 运算类，真正实现加减法运算
 */
public class Operation implements OperationApi {
    /**
     * 记录运算的结果
     */
    private int result;
    public int getResult() {
        return result;
    }

    public void add(int num) {
        result += num;
    }
    public void substract(int num) {
        result -= num;
    }
    public Memento createMemento() {
        MementoImpl m = new MementoImpl(result);
        return m;
    }
    public void setMemento(Memento memento) {
        MementoImpl m = (MementoImpl)memento;
        this.result = m.getResult();
    }
    /**
     * 备忘录对象
     */
    private static class MementoImpl implements Memento {
        private int result = 0;
        public MementoImpl(int result) {
            this.result = result;
        }

        public int getResult() {
            return result;
        }
    }
}
