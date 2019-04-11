/*
 * Author: Jia Yang
 */

#include <windows.h> // todo
#include "../../registry.h"
#include "../../../jvm.h"
#include "../../../rtda/thread/frame.h"

// public native int availableProcessors();
static void availableProcessors(Frame *frame)
{
    // todo 这是windows 方式，不利于平台移植
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);
    frame_stack_pushi(frame, (jint) sysInfo.dwNumberOfProcessors);
}

// public native long freeMemory();
static void freeMemory(Frame *frame)
{
    jvm_abort("");
}

// public native long totalMemory();
static void totalMemory(Frame *frame)
{
    jvm_abort("");
}

// public native long maxMemory();
static void maxMemory(Frame *frame)
{
    jvm_abort("");
}

// public native void gc();
static void gc(Frame *frame)
{
    jvm_abort("");
}

/* Wormhole for calling java.lang.ref.Finalizer.runFinalization */
// private static native void runFinalization0();
static void runFinalization0(Frame *frame)
{
    jvm_abort("");
}

// public native void traceInstructions(boolean on)
static void traceInstructions(Frame *frame)
{
    jvm_abort("");
}

// public native void traceMethodCalls(boolean on);
static void traceMethodCalls(Frame *frame)
{
    jvm_abort("");
}

void java_lang_Runtime_registerNatives()
{
    register_native_method("java/lang/Runtime~registerNatives~()V", registerNatives);
    register_native_method("java/lang/Runtime~availableProcessors~()I", availableProcessors);
    register_native_method("java/lang/Runtime~freeMemory~()J", freeMemory);
    register_native_method("java/lang/Runtime~totalMemory~()J", totalMemory);
    register_native_method("java/lang/Runtime~maxMemory~()J", maxMemory);
    register_native_method("java/lang/Runtime~gc~()V", gc);
    register_native_method("java/lang/Runtime~runFinalization0~()V", runFinalization0);
    register_native_method("java/lang/Runtime~traceInstructions~(Z)V", traceInstructions);
    register_native_method("java/lang/Runtime~traceMethodCalls~(Z)V", traceMethodCalls);
}
