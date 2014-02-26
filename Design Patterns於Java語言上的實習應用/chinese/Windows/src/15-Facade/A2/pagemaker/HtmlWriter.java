package pagemaker;

import java.io.Writer;
import java.io.IOException;

public class HtmlWriter {
    private Writer writer;
    public HtmlWriter(Writer writer) {  // «Øºc¤l
        this.writer = writer;
    }
    public void title(String title) throws IOException {    // ¿é¥X¼ÐÃD
        writer.write("<html>");
        writer.write("<head>");
        writer.write("<title>" + title + "</title>");
        writer.write("</head>");
        writer.write("<body>\n");
        writer.write("<h1>" + title + "</h1>\n");
    }
    public void paragraph(String msg) throws IOException {  // ¿é¥X¬q¸¨
        writer.write("<p>" + msg + "</p>\n");
    }
    public void link(String href, String caption) throws IOException {  // ¿é¥XÃìµ²
        paragraph("<a href=\"" + href + "\">" + caption + "</a>");
    }
    public void mailto(String mailaddr, String username) throws IOException {   // ¿é¥X¶l¥ó«H½c—Í
        link("mailto:" + mailaddr, username);
    }
    public void close() throws IOException {    // Ãö³¬ÀÉ®×
        writer.write("</body>");
        writer.write("</html>\n");
        writer.close();
    }
}
