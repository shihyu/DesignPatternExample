public interface Context {

    public abstract void setClock(int hour);                // 時刻の設定
    public abstract void changeState(State state);          // 状態変化
    public abstract void callSecurityCenter(String msg);    // 警備センター呼び出し
    public abstract void recordLog(String msg);             // 警備センター記録
}
