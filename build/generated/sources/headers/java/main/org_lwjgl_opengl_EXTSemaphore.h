/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_EXTSemaphore */

#ifndef _Included_org_lwjgl_opengl_EXTSemaphore
#define _Included_org_lwjgl_opengl_EXTSemaphore
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_opengl_EXTSemaphore_GL_NUM_DEVICE_UUIDS_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_NUM_DEVICE_UUIDS_EXT 38294L
#undef org_lwjgl_opengl_EXTSemaphore_GL_DEVICE_UUID_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_DEVICE_UUID_EXT 38295L
#undef org_lwjgl_opengl_EXTSemaphore_GL_DRIVER_UUID_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_DRIVER_UUID_EXT 38296L
#undef org_lwjgl_opengl_EXTSemaphore_GL_UUID_SIZE_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_UUID_SIZE_EXT 16L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_GENERAL_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_GENERAL_EXT 38285L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_COLOR_ATTACHMENT_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_COLOR_ATTACHMENT_EXT 38286L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT 38287L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT 38288L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_SHADER_READ_ONLY_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_SHADER_READ_ONLY_EXT 38289L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_TRANSFER_SRC_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_TRANSFER_SRC_EXT 38290L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_TRANSFER_DST_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_TRANSFER_DST_EXT 38291L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT 38192L
#undef org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT
#define org_lwjgl_opengl_EXTSemaphore_GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT 38193L
/*
 * Class:     org_lwjgl_opengl_EXTSemaphore
 * Method:    nglGenSemaphoresEXT
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphore_nglGenSemaphoresEXT
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_EXTSemaphore
 * Method:    nglDeleteSemaphoresEXT
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphore_nglDeleteSemaphoresEXT
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_EXTSemaphore
 * Method:    glIsSemaphoreEXT
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_EXTSemaphore_glIsSemaphoreEXT
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_lwjgl_opengl_EXTSemaphore
 * Method:    nglSemaphoreParameterui64vEXT
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphore_nglSemaphoreParameterui64vEXT
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_EXTSemaphore
 * Method:    nglGetSemaphoreParameterui64vEXT
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphore_nglGetSemaphoreParameterui64vEXT
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     org_lwjgl_opengl_EXTSemaphore
 * Method:    nglWaitSemaphoreEXT
 * Signature: (IIJIJJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphore_nglWaitSemaphoreEXT
  (JNIEnv *, jclass, jint, jint, jlong, jint, jlong, jlong);

/*
 * Class:     org_lwjgl_opengl_EXTSemaphore
 * Method:    nglSignalSemaphoreEXT
 * Signature: (IIJIJJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_EXTSemaphore_nglSignalSemaphoreEXT
  (JNIEnv *, jclass, jint, jint, jlong, jint, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
