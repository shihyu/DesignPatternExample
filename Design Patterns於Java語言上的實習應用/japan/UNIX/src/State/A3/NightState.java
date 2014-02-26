public class NightState implements State {
    private static NightState singleton = new NightState();
    private NightState() {                              // コンストラクタはprivate
    }
    public static State getInstance() {                 // 唯一のインスタンスを得る
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 時刻設定
        if (9 <= hour && hour < 17) {
            context.changeState(DayState.getInstance());
        } else if (12 <= hour && hour < 13) {                   
            context.changeState(NoonState.getInstance());       
        }                                                       
    }
    public void doUse(Context context) {                // 金庫使用
        context.callSecurityCenter("非常:夜間の金庫使用！");
    }
    public void doAlarm(Context context) {              // 非常ベル
        context.callSecurityCenter("非常ベル(夜間)");
    }
    public void doPhone(Context context) {              // 通常通話
        context.recordLog("夜間の通話録音");
    }
    public String toString() {                          // 文字列表現
        return "[夜間]";
    }
}
