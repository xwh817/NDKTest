package com.xwh.ndktest;

/**
 * Created by xwh on 18-12-8.
 */

public class JNITest {

    // 动态导入 so 库
    static {
        System.loadLibrary("hello");
    }

    //创建一个 native 方法
    public native static String get();

}
