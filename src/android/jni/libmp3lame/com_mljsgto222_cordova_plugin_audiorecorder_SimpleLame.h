/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame */

#ifndef _Included_com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame
#define _Included_com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame_close
  (JNIEnv *, jclass);

/*
 * Class:     com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame
 * Method:    encode
 * Signature: ([S[SI[B)I
 */
JNIEXPORT jint JNICALL Java_com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame_encode
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

/*
 * Class:     com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame
 * Method:    flush
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame_flush
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame
 * Method:    init
 * Signature: (IIIII)V
 */
JNIEXPORT jint JNICALL Java_com_mljsgto222_cordova_plugin_audiorecorder_SimpleLame_init
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif