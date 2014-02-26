import java.io.*;

public class HTMLBuilder extends Builder {
    private String filename;                                    // 作成するファイル名
    private PrintWriter writer;                                 // ファイルに書き込む
    public void buildTitle(String title) {                       // HTMLファイルでのタイトル
        filename = title + ".html";                                 // タイトルを元にファイル名を決定
        try {
            writer = new PrintWriter(new FileWriter(filename));     // PrintWriterを作る
        } catch (IOException e) {
            e.printStackTrace();
        }
        writer.println("<html><head><title>" + title + "</title></head><body>");    // タイトルを出力
        writer.println("<h1>" + title + "</h1>");
    }
    public void buildString(String str) {                        // HTMLファイルでの文字列
        writer.println("<p>" + str + "</p>");                       // <p>タグで出力
    }
    public void buildItems(String[] items) {                     // HTMLファイルでの箇条書き
        writer.println("<ul>");                                     // <ul>と<li>で出力
        for (int i = 0; i < items.length; i++) {
            writer.println("<li>" + items[i] + "</li>");
        }
        writer.println("</ul>");
    }
    public Object buildResult() {                                 // 完成した文書
        writer.println("</body></html>");                           // タグを閉じる
        writer.close();                                             // ファイルをクローズ
        return filename;                                            // ファイル名を返す
    }
 }