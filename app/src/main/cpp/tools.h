//
// Created by apple on 17/3/26.
//

#ifndef BTPLAYER_TOOLS_H
#define BTPLAYER_TOOLS_H

#include <jni.h>

#ifdef  __cplusplus
extern "C" {
#endif

jstring str2Jstring(JNIEnv* env, const char* pStr);
char* Jstring2str(JNIEnv* env, jstring jstr);

#ifdef  __cplusplus
}
#endif  /* end of __cplusplus */

#endif //BTPLAYER_TOOLS_H
