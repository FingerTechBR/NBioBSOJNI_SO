/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "NBioAPI.h"
/* Header for class NBioBSPJNI */

#ifndef _Included_NBioBSPJNI
#define _Included_NBioBSPJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     NBioBSPJNI
 * Method:    sayHello
 * Signature: ()V
 */


JNIEXPORT NBioAPI_RETURN JNICALL Java_NBioBSPJNI_NBioBSPJNI_NativeOpenDevice
    (JNIEnv *env, jobject thisObj);

JNIEXPORT void JNICALL Java_NBioBSPJNI_NBioBSPJNI_NativeCapture
   (JNIEnv *jenv,jobject thisObj, jint purpose,jobject fir_handle, jint timeout, jobject fir_handleaudit, jobject winoption);

    JNIEXPORT void JNICALL Java_NBioBSPJNI_NBioBSPJNI_TesteObject
   (JNIEnv *env, jobject thisObj, jobject  b);



JNIEXPORT NBioAPI_RETURN JNICALL Java_NBioBSPJNI_NBioBSPJNI_NativeVerify
 (JNIEnv *env,jobject thisObj, jobject INPUT_FIR, jobject result, jobject PAY_LOAD , jint inteiro);





#ifdef __cplusplus
}
#endif
#endif
