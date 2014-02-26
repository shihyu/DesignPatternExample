public class NoonState implements State {
    private static NoonState singleton = new NoonState();
    private NoonState() {                                // 建構子為private
    }
    public static State getInstance() {                 // 取得唯一的個體
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 設定時間
        if (hour < 9 || 17 <= hour) {
            context.changeState(NightState.getInstance());
        } else if (9 <= hour && hour < 12 || 13 <= hour && hour < 17) {
            context.changeState(DayState.getInstance());
        }
    }
    public void doUse(Context context) {                // 使用金庫
        context.callSecurityCenter("異常：午餐時間使用金庫！");
    }
    public void doAlarm(Context context) {              // 警鈴
        context.callSecurityCenter("警鈴(午餐時間)");
    }
    public void doPhone(Context context) {              // 一般通話
        context.recordLog("午餐時間的通話錄音");
    }
    public String toString() {                          // 輸出字串
        return "[午餐時間]";
    }
}
