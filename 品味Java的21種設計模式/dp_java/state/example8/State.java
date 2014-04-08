package cn.javass.dp.state.example8;
/**
 * 公共状态接口
 */
public interface State {
    /**
     * 执行状态对应的功能处理
     * @param ctx 上下文的实例对象
     */
    public void doWork(StateMachine ctx);
}
