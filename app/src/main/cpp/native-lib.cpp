#include <jni.h>
#include <string>

extern "C" {
jstring
Java_com_qicode_jniaesdr_JniUtil_getSecret(JNIEnv *env, jobject) {
    std::string secret = "secret from c++";
    return env->NewStringUTF(secret.c_str());
}
}
