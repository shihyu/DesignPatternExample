package cn.javass.dp.decorator.example5;

import java.io.*;

/**
 * 实现简单的加密
 */
public class EncryptOutputStream  extends OutputStream {
    //持有被装饰的对象
    private OutputStream os = null;
    public EncryptOutputStream(OutputStream os) {
        this.os = os;
    }

    public void write(int a) throws IOException {
        //先统一向后移动两位
        a = a + 2;
        //97是小写的a的码值
        if (a >= (97 + 26)) {
            //如果大于，表示已经是y或者z了，减去26就回到a或者b了
            a = a - 26;
        }

        this.os.write(a);
    }
}
