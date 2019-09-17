#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_myapp_quia_com_miniproject_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
