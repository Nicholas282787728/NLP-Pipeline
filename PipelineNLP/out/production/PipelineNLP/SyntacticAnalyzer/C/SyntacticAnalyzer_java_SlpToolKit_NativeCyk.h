/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class SlpToolKit_NativeCyk */

#ifndef _Included_SlpToolKit_NativeCyk
#define _Included_SlpToolKit_NativeCyk
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     SlpToolKit_NativeCyk
 * Method:    analyseSyntaxique
 * Signature: (Ljava/lang/String;JJ)J
 */
JNIEXPORT jlong JNICALL Java_SlpToolKit_NativeCyk_analyseSyntaxique
  (JNIEnv *, jclass, jstring, jlong, jlong);

/*
 * Class:     SlpToolKit_NativeCyk
 * Method:    lexicalise
 * Signature: (Ljava/lang/String;JJD)J
 */
JNIEXPORT jlong JNICALL Java_SlpToolKit_NativeCyk_lexicalise
  (JNIEnv *, jclass, jstring, jlong, jlong, jdouble);

/*
 * Class:     SlpToolKit_NativeCyk
 * Method:    decoupeSimple
 * Signature: (Ljava/lang/String;JJ)J
 */
JNIEXPORT jlong JNICALL Java_SlpToolKit_NativeCyk_decoupeSimple
  (JNIEnv *, jclass, jstring, jlong, jlong);

/*
 * Class:     SlpToolKit_NativeCyk
 * Method:    extraitPlusProbable
 * Signature: (JJIIZ)J
 */
JNIEXPORT jlong JNICALL Java_SlpToolKit_NativeCyk_extraitPlusProbable
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jboolean);

/*
 * Class:     SlpToolKit_NativeCyk
 * Method:    parcoursCykIteratif
 * Signature: (JJIIJJZ)Z
 */
JNIEXPORT jboolean JNICALL Java_SlpToolKit_NativeCyk_parcoursCykIteratif
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlong, jlong, jboolean);

/*
 * Class:     SlpToolKit_NativeCyk
 * Method:    razParcoursCykIteratif
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_SlpToolKit_NativeCyk_razParcoursCykIteratif
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     SlpToolKit_NativeCyk
 * Method:    getProbability
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_SlpToolKit_NativeCyk_getProbability
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
