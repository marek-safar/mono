#include <config.h>

#define MONO 1
/* clock_gettime () is found by configure on Apple builds, but its only present from ios 10, macos 10.12, tvos 10 and watchos 3 */
#if defined (TARGET_WASM) || defined (TARGET_IOS) || defined (TARGET_OSX) || defined (TARGET_WATCHOS) || defined (TARGET_TVOS)
#undef HAVE_CLOCK_MONOTONIC
#undef HAVE_CLOCK_MONOTONIC_COARSE
#endif

#ifdef TARGET_ANDROID
/* arc4random_buf() is not available even when configure seems to find it */
#undef HAVE_ARC4RANDOM_BUF
#endif

/* Based on src/Native/Unix/configure.cmake */
#if defined(TARGET_OSX)
#define PAL_UNIX_NAME "OSX"
#elif defined(__linux__)
#define PAL_UNIX_NAME "LINUX"
#else
#error "Cannot define PAL_UNIX_NAME"
#endif

#if defined(TARGET_ARM)
#define _ARM_ 1
#elif defined(TARGET_ARM64)
#define _ARM64_ 1
#elif defined(TARGET_AMD64)
#define _AMD64_ 1
#elif defined(TARGET_X86)
#define _X86_ 1
#endif
