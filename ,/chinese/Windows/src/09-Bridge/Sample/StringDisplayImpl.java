public class StringDisplayImpl extends DisplayImpl {
    private String string;                     // 應列印的字串。
    private int width;                         // 以byte為單位所球出的字串「寬幅」。
    public StringDisplayImpl(String string) {  // 建構子傳遞過來的字串string，
        this.string = string;                  // 先儲存在欄位。
        this.width = string.getBytes().length; // 接著把byte單位的寬幅也儲存
                                               // 到欄位，等到後面再利用。
    }
    public void rawOpen() {
        printLine();
    }
    public void rawPrint() {
        System.out.println("|" + string + "|"); // 列印時前後加上"|"。
    }
    public void rawClose() {
        printLine();
    }
    private void printLine() {
        System.out.print("+");                  // 輸出框角的"+"記號。
        for (int i = 0; i < width; i++) {       // 輸出width個"-"，
            System.out.print("-");              // 做為框線。
        }
        System.out.println("+");                //輸出框角的"+"記號。
    }
}
