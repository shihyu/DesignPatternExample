public class UrgentState implements State {
    private static UrgentState singleton = new UrgentState();
    private UrgentState() {                                // コンストラクタはprivate
    }
    public static State getInstance() {                 // 唯一のインスタンスを得る
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 時刻設定     
        // 時刻設定では何も処理をしない                                 
    }                                                                   
    public void doUse(Context context) {                // 金庫使用
        context.callSecurityCenter("非常:非常時の金庫使用！");
    }
    public void doAlarm(Context context) {              // 非常ベル
        context.callSecurityCenter("非常ベル(非常時)");
    }
    public void doPhone(Context context) {              // 通常通話
        context.callSecurityCenter("通常の通話(非常時)");
    }
    public String toString() {                          // 文字列表現
        return "[非常時]";
    }
}
