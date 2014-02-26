public class CharDisplay extends AbstractDisplay {  // CharDisplay是AbstractDisplay
                                             // 的子類別。
    private char ch;		// 應輸出的字元。
    public CharDisplay(char ch) {	// 把以建構子傳遞過來的字元ch
        this.ch = ch;	// 儲存在欄位內。
    }
    public void open() {	// 本來在父類別時是抽象方法。
	// 這裡覆寫（override）後實作。
        System.out.print("<<");	// 輸出"<<"做為開始字串。
    }
    public void print() {	// print方法也是在此實作。它是從display
				// 被重複呼叫出來。
        System.out.print(ch);	// 輸出1個儲存在欄位的字元。
    }
    public void close() {	// close方法也是在此實作。
        System.out.println(">>");	// 輸出結束字串">>"。
    }
}
