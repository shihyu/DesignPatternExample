public class CharDisplay extends AbstractDisplay {  // CharDisplayは、AbstractDisplayのサブクラス。
    private char ch;                                // 表示すべき文字。
    public CharDisplay(char ch) {                   // コンストラクタで渡された文字chを、
        this.ch = ch;                               // フィールドに記憶しておく。
    }
    public void open() {                            // スーパークラスでは抽象メソッドだった。ここでオーバーライドして実装。
        System.out.print("<<");                     // 開始文字列として"<<"を表示する。
    }
    public void print() {                           // printメソッドも、ここで実装する。これがdisplayから繰り返して呼び出される。
        System.out.print(ch);                       // フィールドに記憶しておいた文字を1個表示する。
    }
    public void close() {                           // closeメソッドも、ここで実装。
        System.out.println(">>");                   // 終了文字列">>"を表示。
    }
}
