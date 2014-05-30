// AdapterObj_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Adapter.h"

int main(int argc, char* argv[])
{
	//定义第三方类的一个接口
	ThirdPartyInterface* thirdPartyInterface;
	//第三方类接口指向第三方类的一个实例，此实例可换
	thirdPartyInterface = new ThirdPartyOne;
    //目标类指针指向适配器则调用第三方类方法
	Target* tgt= new Adapter(thirdPartyInterface);
	//第三方类方法，注意我们调用时用的是我们熟悉的目标类方法Request
	tgt->Request();
	//目标类指针指向本类对象，则调用本类方法
	tgt = new Target();
	//调用本类方法
	tgt->Request();
	printf("Hello World!\n");
	return 0;
}

