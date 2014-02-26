public class TextBuilder extends Builder {
    private String buffer = "";                                 // 開始在此欄位建立文件
    public void makeTitle(String title) {                       // 一般文字格式的標題
        buffer += "==============================\n";               // 花邊
        buffer += "『" + title + "』\n";                            // 有『』的標題
        buffer += "\n";                                             // 空行
    }
    public void makeString(String str) {                        // 一般文字格式的字串
        buffer += '■' + str + "\n";                                // 有■的字串
        buffer += "\n";                                             // 空行
    }
    public void makeItems(String[] items) {                     // 一般文字格式的項目
        for (int i = 0; i < items.length; i++) {
            buffer += "　‧" + items[i] + "\n";                     // 有‧的項目
        }
        buffer += "\n";                                             // 空行
    }
    public Object getResult() {                                 // 完成的文件
        buffer += "==============================\n";               // 花邊
        return buffer;
    }
}
