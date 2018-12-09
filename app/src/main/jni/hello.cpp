#include <jni.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * 函数名规则: Java_包名_类名_方法名
 * @param env  表示一个指向JNI环境的指针, 可以通过它来方位JNI提供的接口方法
 * @param thiz 表示Java对象中的this
 * @return
 */
jstring Java_com_xwh_ndktest_JNITest_get(JNIEnv *env, jobject thiz) {
    printf("invoke get in c++\n");
    return env->NewStringUTF("Hello from JNI!");
}

#ifdef __cplusplus
}
#endif