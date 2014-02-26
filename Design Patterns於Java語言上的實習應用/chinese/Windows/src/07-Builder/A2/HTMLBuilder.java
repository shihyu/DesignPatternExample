import java.io.*;

public class HTMLBuilder extends Builder {
    private String filename;                           // 產生的檔名
    private PrintWriter writer;                        // 寫入到檔案的PrintWriter
    public void makeTitle(String title) {              // HTML檔的標題
        filename = title + ".html";                    // 根據標題決定檔名
        try {
            writer = new PrintWriter(new FileWriter(filename));  // 建立PrintWriter
        } catch (IOException e) {
            e.printStackTrace();
        }
        writer.println("<html><head><title>" + title + "</title></head><body>");
        // 輸出標題
        writer.println("<h1>" + title + "</h1>");
    }
    public void makeString(String str) {               // HTML檔的字串
        writer.println("<p>" + str + "</p>");          // 以<p>標籤輸出
    }
    public void makeItems(String[] items) {            // HTML檔的項目
        writer.println("<ul>");                        // 以<ul>和<li>輸出
        for (int i = 0; i < items.length; i++) {
            writer.println("<li>" + items[i] + "</li>");
        }
        writer.println("</ul>");
    }
    public Object getResult() {                        // 完成的文件
        writer.println("</body></html>");              // 關閉標籤
        writer.close();                                // 關閉檔案
        return filename;                               // 傳回檔名
    }
}
