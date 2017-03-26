//
// Created by apple on 17/3/25.
//

#ifndef ANYTEST_MYLOG_H
#define ANYTEST_MYLOG_H

#include<Android/log.h>

#define TAG "zqbt"

#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__)
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__)

# define NELEM(x) ((int) (sizeof(x) / sizeof((x)[0])))

#endif //ANYTEST_MYLOG_H
