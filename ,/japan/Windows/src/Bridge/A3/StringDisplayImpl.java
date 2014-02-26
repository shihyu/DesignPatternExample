public class StringDisplayImpl extends DisplayImpl {
    private String string;                              // 表示するべき文字列
    private int width;                                  // バイト単位で計算した文字列の「幅」
    public StringDisplayImpl(String string) {           // コンストラクタで渡された文字列stringを、
        this.string = string;                               // フィールドに記憶しておく
        this.width = string.getBytes().length;              // それからバイト単位の幅もフィールドに記憶しておいて、後で使う
    }
    public void rawOpen() {
        printLine();
    }
    public void rawPrint() {
        System.out.println("|" + string + "|");         // 前後に"|"をつけて表示
    }
    public void rawClose() {
        printLine();
    }
    private void printLine() {
        System.out.print("+");                          // 枠の角を表現する"+"マークを表示する
        for (int i = 0; i < width; i++) {               // width個の"-"を表示して、
            System.out.print("-");                      // 枠線として用いる
        }
        System.out.println("+");                        // 枠の角を表現する"+"マークを表示する
    }
}
