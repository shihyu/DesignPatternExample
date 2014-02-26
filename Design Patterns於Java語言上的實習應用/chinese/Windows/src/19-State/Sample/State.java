public interface State {
    public abstract void doClock(Context context, int hour);    // 設定時間
    public abstract void doUse(Context context);                // 使用金庫
    public abstract void doAlarm(Context context);              // 警鈴
    public abstract void doPhone(Context context);              // 一般通話
}
