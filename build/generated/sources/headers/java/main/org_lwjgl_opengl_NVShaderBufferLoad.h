/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_NVShaderBufferLoad */

#ifndef _Included_org_lwjgl_opengl_NVShaderBufferLoad
#define _Included_org_lwjgl_opengl_NVShaderBufferLoad
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_opengl_NVShaderBufferLoad_GL_BUFFER_GPU_ADDRESS_NV
#define org_lwjgl_opengl_NVShaderBufferLoad_GL_BUFFER_GPU_ADDRESS_NV 36637L
#undef org_lwjgl_opengl_NVShaderBufferLoad_GL_GPU_ADDRESS_NV
#define org_lwjgl_opengl_NVShaderBufferLoad_GL_GPU_ADDRESS_NV 36660L
#undef org_lwjgl_opengl_NVShaderBufferLoad_GL_MAX_SHADER_BUFFER_ADDRESS_NV
#define org_lwjgl_opengl_NVShaderBufferLoad_GL_MAX_SHADER_BUFFER_ADDRESS_NV 36661L
/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glMakeBufferResidentNV
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glMakeBufferResidentNV
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glMakeBufferNonResidentNV
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glMakeBufferNonResidentNV
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glIsBufferResidentNV
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glIsBufferResidentNV
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glMakeNamedBufferResidentNV
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glMakeNamedBufferResidentNV
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glMakeNamedBufferNonResidentNV
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glMakeNamedBufferNonResidentNV
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glIsNamedBufferResidentNV
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glIsNamedBufferResidentNV
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    nglGetBufferParameterui64vNV
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_nglGetBufferParameterui64vNV
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    nglGetNamedBufferParameterui64vNV
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_nglGetNamedBufferParameterui64vNV
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    nglGetIntegerui64vNV
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_nglGetIntegerui64vNV
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glUniformui64NV
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glUniformui64NV
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    nglUniformui64vNV
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_nglUniformui64vNV
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    nglGetUniformui64vNV
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_nglGetUniformui64vNV
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    glProgramUniformui64NV
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_glProgramUniformui64NV
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_NVShaderBufferLoad
 * Method:    nglProgramUniformui64vNV
 * Signature: (IIIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_NVShaderBufferLoad_nglProgramUniformui64vNV
  (JNIEnv *, jclass, jint, jint, jint, jlong);

#ifdef __cplusplus
}
#endif
#endif
