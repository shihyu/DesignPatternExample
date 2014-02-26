import java.io.*;

public class FileDisplayImpl extends DisplayImpl {
    private String filename;
    private BufferedReader reader;
    private final int MAX_READAHEAD_LIMIT = 4096;   // 可反覆列印的上限（緩衝器容量）
    public FileDisplayImpl(String filename) {
        this.filename = filename;
    }
    public void rawOpen() {
        try {
            reader = new BufferedReader(new FileReader(filename));
            reader.mark(MAX_READAHEAD_LIMIT);
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("=-=-=-=-=-= " + filename + " =-=-=-=-=-="); // 花邊
    }
    public void rawPrint() {
        try {
            String line;
            reader.reset(); // 捲回到mark的位置
            while ((line = reader.readLine()) != null) {
                System.out.println("> " + line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    public void rawClose() {
        System.out.println("=-=-=-=-=-= "); // 花邊
        try {
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
