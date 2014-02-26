public class DayState implements State {
    private static DayState singleton = new DayState();
    private DayState() {                                // コンストラクタはprivate
    }
    public static State getInstance() {                 // 唯一のインスタンスを得る
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 時刻設定
        if (hour < 9 || 17 <= hour) {
            context.changeState(NightState.getInstance());
        } else if (12 <= hour && hour < 13) {                   
            context.changeState(NoonState.getInstance());       
        }                                                       
    }
    public void doUse(Context context) {                // 金庫使用
        context.recordLog("金庫使用(昼間)");
    }
    public void doAlarm(Context context) {              // 非常ベル
        context.callSecurityCenter("非常ベル(昼間)");
    }
    public void doPhone(Context context) {              // 通常通話
        context.callSecurityCenter("通常の通話(昼間)");
    }
    public String toString() {                          // 文字列表現
        return "[昼間]";
    }
}
