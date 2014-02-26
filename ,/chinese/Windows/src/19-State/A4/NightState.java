public class NightState implements State {
    private static NightState singleton = new NightState();
    private NightState() {                              // 建構子為private
    }
    public static State getInstance() {                 // 取得唯一的個體
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 設定時間
        if (9 <= hour && hour < 17) {
            context.changeState(DayState.getInstance());
        }
    }
    public void doUse(Context context) {                // 使用金庫
        context.callSecurityCenter("異常：晚間使用金庫！");
    }
    public void doAlarm(Context context) {              // 警鈴
        context.callSecurityCenter("警鈴(晚間)");
        context.changeState(UrgentState.getInstance()); 
    }
    public void doPhone(Context context) {              // 一般通話
        context.recordLog("晚間的通話錄音");
    }
    public String toString() {                          // 輸出字串
        return "[晚間]";
    }
}
