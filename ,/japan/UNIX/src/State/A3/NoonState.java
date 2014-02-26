public class NoonState implements State {
    private static NoonState singleton = new NoonState();
    private NoonState() {                                // コンストラクタはprivate
    }
    public static State getInstance() {                 // 唯一のインスタンスを得る
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 時刻設定     
        if (hour < 9 || 17 <= hour) {
            context.changeState(NightState.getInstance());
        } else if (9 <= hour && hour < 12 || 13 <= hour && hour < 17) {
            context.changeState(DayState.getInstance());
        }
    }
    public void doUse(Context context) {                // 金庫使用
        context.callSecurityCenter("非常:昼食時の金庫使用！");
    }
    public void doAlarm(Context context) {              // 非常ベル
        context.callSecurityCenter("非常ベル(昼食時)");
    }
    public void doPhone(Context context) {              // 通常通話
        context.recordLog("昼食時の通話録音");
    }
    public String toString() {                          // 文字列表現
        return "[昼食時]";
    }
}
