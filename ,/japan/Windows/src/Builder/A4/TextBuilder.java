public class TextBuilder extends Builder {
    private String buffer = "";                                 // このフィールドに文書を構築していく
    public void makeTitle(String title) {                       // プレーンテキストでのタイトル
        buffer += "==============================\n";               // 飾り線
        buffer += "『" + title + "』\n";                            // 『』つきのタイトル
        buffer += "\n";                                             // 空行
    }
    public void makeString(String str) {                        // プレーンテキストでの文字列
        buffer += '■' + str + "\n";                                // ■つきの文字列
        buffer += "\n";                                             // 空行
    }
    public void makeItems(String[] items) {                     // プレーンテキストでの箇条書き
        for (int i = 0; i < items.length; i++) {
            buffer += "　・" + items[i] + "\n";                     // ・つきの項目
        }
        buffer += "\n";                                             // 空行
    }
    public Object getResult() {                                 // 完成した文書
        buffer += "==============================\n";               // 飾り線
        return buffer;
    }
}
