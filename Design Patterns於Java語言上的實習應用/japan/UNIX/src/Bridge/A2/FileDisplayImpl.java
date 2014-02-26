import java.io.*;

public class FileDisplayImpl extends DisplayImpl {
    private String filename;
    private BufferedReader reader;
    private final int MAX_READAHEAD_LIMIT = 4096;   // 繰り返し表示させられる上限（バッファサイズ）
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
        System.out.println("=-=-=-=-=-= " + filename + " =-=-=-=-=-="); // 飾り枠
    }
    public void rawPrint() {
        try {
            String line;
            reader.reset(); // markした位置まで巻き戻す
            while ((line = reader.readLine()) != null) {
                System.out.println("> " + line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    public void rawClose() {
        System.out.println("=-=-=-=-=-= "); // 飾り枠
        try {
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
