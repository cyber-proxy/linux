#include "jni.h"
#include <iostream>
#include <stdlib>
#include <unistd>

class msgQueue{
    static void android_os_MessageQueue_nativePollOnce(JNIEnv* env, jobject obj, jlong ptr, jint timeoutMillis) {
        //将Java层传递下来的mPtr转换为nativeMessageQueue
        NativeMessageQueue* nativeMessageQueue = reinterpret_cast<NativeMessageQueue*>(ptr);
        nativeMessageQueue->pollOnce(env, obj, timeoutMillis); 
    }

    void NativeMessageQueue::pollOnce(JNIEnv* env, jobject pollObj, int timeoutMillis) {
        mPollEnv = env;
        mPollObj = pollObj;
        // 重点函数
        mLooper->pollOnce(timeoutMillis);
        mPollObj = NULL;
        mPollEnv = NULL;

        if (mExceptionObj) {
            env->Throw(mExceptionObj);
            env->DeleteLocalRef(mExceptionObj);
            mExceptionObj = NULL;
        }
    }
}

