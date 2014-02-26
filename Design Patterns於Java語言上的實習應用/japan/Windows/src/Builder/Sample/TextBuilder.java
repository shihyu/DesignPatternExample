public class TextBuilder extends Builder {
    private StringBuffer buffer = new StringBuffer();           // このフィールドに文書を構築していく
    public void makeTitle(String title) {                       // プレーンテキストでのタイトル
        buffer.append("==============================\n");          // 飾り線
        buffer.append("『" + title + "』\n");                       // 『』つきのタイトル
        buffer.append("\n");                                        // 空行
    }
    public void makeString(String str) {                        // プレーンテキストでの文字列
        buffer.append('■' + str + "\n");                           // ■つきの文字列
        buffer.append("\n");                                        // 空行
    }
    public void makeItems(String[] items) {                     // プレーンテキストでの箇条書き
        for (int i = 0; i < items.length; i++) {
            buffer.append("　・" + items[i] + "\n");                // ・つきの項目
        }
        buffer.append("\n");                                        // 空行
    }
    public Object getResult() {                                 // 完成した文書
        buffer.append("==============================\n");          // 飾り線
        return buffer.toString();                                   // StringBufferをStringに変換
    }
}
