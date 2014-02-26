package factory;
import java.io.*;
import java.util.Vector;

public abstract class Page {
    protected String title;
    protected String author;
    protected Vector content = new Vector();
    public Page(String title, String author) {
        this.title = title;
        this.author = author;
    }
    public void add(Item item) {
        content.add(item);
    }
    public void output() {
        try {
            String filename = title + ".html";
            Writer writer = new FileWriter(filename);
            writer.write(this.makeHTML());
            writer.close();
            System.out.println("¤w²£¥Í" + filename + "¡C");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    public abstract String makeHTML();
}
