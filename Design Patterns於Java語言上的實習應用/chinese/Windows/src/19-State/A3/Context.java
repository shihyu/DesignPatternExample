public interface Context {

    public abstract void setClock(int hour);                // 設定時間
    public abstract void changeState(State state);          // 狀態變化
    public abstract void callSecurityCenter(String msg);    // 呼叫保全中心
    public abstract void recordLog(String msg);             // 保全中心保留記錄
}
