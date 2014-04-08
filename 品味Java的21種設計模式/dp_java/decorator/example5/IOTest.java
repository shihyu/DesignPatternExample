package cn.javass.dp.decorator.example5;
import java.io.*;
public class IOTest {
    public static void main(String[] args)throws Exception  {
        //流式读取文件
        DataInputStream din = null;

        try{
            din = new DataInputStream(
                new BufferedInputStream(
                    new FileInputStream("IOTest.txt")
                )
            );
            //然后就可以获取文件内容了
            byte bs [] = new byte[din.available()];
            din.read(bs);
            String content = new String(bs);
            System.out.println("文件内容====" + content);
        } finally{
            din.close();
        }
    }
}
