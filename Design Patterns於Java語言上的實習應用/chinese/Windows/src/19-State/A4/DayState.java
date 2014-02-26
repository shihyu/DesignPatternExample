public class DayState implements State {
    private static DayState singleton = new DayState();
    private DayState() {                                // 建構子為private
    }
    public static State getInstance() {                 // 取得唯一的個體
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 設定時間
        if (hour < 9 || 17 <= hour) {
            context.changeState(NightState.getInstance());
        }
    }
    public void doUse(Context context) {                // 使用金庫
        context.recordLog("使用金庫(白天)");
    }
    public void doAlarm(Context context) {              // 警鈴
        context.callSecurityCenter("警鈴(白天)");
        context.changeState(UrgentState.getInstance()); 
    }
    public void doPhone(Context context) {              // 一般通話
        context.callSecurityCenter("一般的通話(白天)");
    }
    public String toString() {                          // 輸出字串
        return "[白天]";
    }
}
