LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	com_misoo_service_counternative.cpp

base := $(LOCAL_PATH)/../../..

LOCAL_C_INCLUDES := \
	$(JNI_H_INCLUDE)

LOCAL_SHARED_LIBRARIES := \
	libutils

LOCAL_PRELINK_MODULE := false

LOCAL_MODULE := libCounter_jni

include $(BUILD_SHARED_LIBRARY)

