#include "com_misoo_service_counternative.h"
#include <utils/Log.h>
#include <utils/IPCThreadState.h>
#include <utils/ProcessState.h>

using namespace android;

JNIEXPORT jint JNICALL Java_com_misoo_service_counternative_execute(JNIEnv *env, jobject thiz, jint n)
{
	int sum=0;
      int i;
      for(i=0; i <= n; i++)
             sum = sum + i; 

	return sum;
}

