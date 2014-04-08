package com.misoo.gx05;

import android.app.Activity;
import android.os.Bundle;

public class ac01 extends Activity {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        //  ----´ú¸Õ¤§¥Î----
        int digit_1 = 1, digit_2 = 1;
        int cs = NativeJniAdder.calculate(digit_1, digit_2);
        int sum = cs % 10;
        int carry = cs / 10;
        String carry_sum_str = String.valueOf(carry) +
                               String.valueOf(sum);
        setTitle("[" + carry_sum_str + "]");
    }
}