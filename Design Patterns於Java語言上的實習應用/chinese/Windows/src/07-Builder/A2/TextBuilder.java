public class TextBuilder extends Builder {
    private StringBuffer buffer = new StringBuffer();	// 開始在此欄位建立文件
    public void makeTitle(String title) {		// 一般文字格式的標題
        buffer.append("==============================\n");	// 花邊
        buffer.append("『" + title + "』\n");			// 有『』的標題
        buffer.append("\n");					// 空行
    }
    public void makeString(String str) {		// 一般文字格式的字串
        buffer.append('■' + str + "\n");		// 有■的字串
        buffer.append("\n");				// 空行
    }
    public void makeItems(String[] items) {		// 一般文字格式的項目
        for (int i = 0; i < items.length; i++) {
            buffer.append("‧" + items[i] + "\n");	// 有‧的項目
        }
        buffer.append("\n");				// 空行
    }
    public Object getResult() {				// 完成的文件
        buffer.append("==============================\n");	// 花邊
        return buffer.toString();		// 把StringBuffer轉換成String
    }
}
