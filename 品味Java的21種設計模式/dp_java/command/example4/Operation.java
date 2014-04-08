package cn.javass.dp.command.example4;
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
    public void setResult(int result) {
        this.result = result;
    }

    public void add(int num) {
        //实现加法功能
        result += num;
    }
    public void substract(int num) {
        //实现减法功能
        result -= num;
    }
}
