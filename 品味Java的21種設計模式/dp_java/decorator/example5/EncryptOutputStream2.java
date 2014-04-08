package cn.javass.dp.decorator.example5;

import java.io.*;

/**
 * 实现简单的加密
 */
public class EncryptOutputStream2  extends java.io.FilterOutputStream {
    public EncryptOutputStream2(OutputStream os) {
        //调用父类的构造方法
        super(os);
    }

    public void write(int a) throws IOException {
        //先统一向后移动两位
        a = a + 2;
        //97是小写的a的码值
        if (a >= (97 + 26)) {
            //如果大于，表示已经是y或者z了，减去26就回到a或者b了
            a = a - 26;
        }

        //调用父类的方法
        super.write(a);
    }
}
