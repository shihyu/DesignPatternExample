public class UrgentState implements State {
    private static UrgentState singleton = new UrgentState();
    private UrgentState() {                                // 建構子為private
    }
    public static State getInstance() {                 // 取得唯一的個體
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 設定時間
        // 設定時間的部分不做處理
    }                                                                   
    public void doUse(Context context) {                // 使用金庫
        context.callSecurityCenter("異常：異常使用金庫！");
    }
    public void doAlarm(Context context) {              // 警鈴
        context.callSecurityCenter("警鈴(異常)");
    }
    public void doPhone(Context context) {              // 一般通話
        context.callSecurityCenter("一般的通話(異常)");
    }
    public String toString() {                          // 輸出字串
        return "[異常]";
    }
}
