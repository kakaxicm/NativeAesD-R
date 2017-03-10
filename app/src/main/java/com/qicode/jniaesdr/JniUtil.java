package com.qicode.jniaesdr;

/**
 * Created by chenming on 17/3/10.
 */

public class JniUtil {
    static {
        System.loadLibrary("native-lib");
    }

    public native String getSecret();

}
