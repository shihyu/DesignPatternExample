package com.misoo.gx05;
import android.util.Log;
public class NativeJniAdder {
    static {
        try {
            Log.i("JNI", "Trying to load libNativeJniAdder.so");
            System.loadLibrary("NativeJniAdder");
        } catch (UnsatisfiedLinkError ule) {
            Log.e("JNI", "WARNING: Could not load libNativeJniAdder.so");
        }
    }
    public static native int calculate(int didgit_1, int digit_2);
}
