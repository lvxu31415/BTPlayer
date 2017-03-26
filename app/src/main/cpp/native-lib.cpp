#include <jni.h>
#include <string>
#include "MACRO.h"

#define JNIREG_CLASS "com/zq/btplayer/MainActivity"

//test method
JNIEXPORT jstring JNICALL native_hello(JNIEnv *env, jclass clazz)
{
    return env->NewStringUTF("hello");
}


JNIEXPORT jint JNICALL parse_torrent(JNIEnv *env, jclass clazz, jstring torrentPath)
{
    
}

static JNINativeMethod method_table[] = {
        {"stringFromJNI", "()Ljava/lang/String;", (void*)native_hello}
};


static int registerNativeMethods(JNIEnv* env, const char* className,
                                 JNINativeMethod* gMethods, int numMethods)
{
    jclass clazz;
    clazz = env->FindClass(className);
    if (clazz == NULL) {
        return JNI_FALSE;
    }
    if (env->RegisterNatives(clazz, gMethods, numMethods) < 0) {
        return JNI_FALSE;
    }

    return JNI_TRUE;
}

int register_ndk_load(JNIEnv* env)
{
    return registerNativeMethods(env, JNIREG_CLASS,
                                        method_table, NELEM(method_table));
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    LOGE("hhh");
    JNIEnv* env = NULL;
    jint result = -1;
    if (vm->GetEnv((void**)&env, JNI_VERSION_1_4) != JNI_OK) {
        return result;
    }
    register_ndk_load(env);
    return JNI_VERSION_1_4;
}

