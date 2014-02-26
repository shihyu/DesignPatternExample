public class StringDisplay extends AbstractDisplay {  // StringDisplay也是
                                                        // AbstractDisplay的子類別。
    private String string;                    // 應輸出的字串。
    private int width;                        // 以byte為單位所求出的字串「寬度」。
    public StringDisplay(String string) {     // 把以建構子傳遞過來的字串string
        this.string = string;                 // 儲存在欄位內。
        this.width = string.getBytes().length;// 接著把以byte為單位的字元寬幅也先
                                              // 儲存在欄位，後面還會使用到。
    }
    public void open() {                      // 先覆寫後再定義的open方法。
        printLine();                          // 以此類別的方法printLine
                                              // 畫出線段。
    }
    public void print() {                        // print方法則在
        System.out.println("|" + string + "|");  // 欄位所儲存的字串前後
                                                 //加上"|"，然後輸出到畫面上。
    }
    public void close() {		// close方法則同
        printLine();			// open，利用printLine方法畫出現段。
    }
    private void printLine() {		// 這是open和close所呼叫的printLine方法。
					// 因為這是private，所以只能在此類別內使用。
        System.out.print("+");		// 輸出"+"記號表示邊框位置。
        for (int i = 0; i < width; i++) {	// 輸出width個"-"，
            System.out.print("-");		// 當作線段。
        }
        System.out.println("+");		//輸出"+"記號表示邊框位置。
    }
}
