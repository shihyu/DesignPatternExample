// AdapterClass_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Adapter.h"

int main(int argc, char* argv[])
{
	//目标类指针可以指向其子类（适配器）对象
	Target* adt = new Adapter();
	//通过适配器调用第三方方法。
	adt->Request();
	//目标类指针当然可以指向本类对象
	adt=new Target();
	//直接调用本类方法
	adt->Request();
	printf("Hello World!\n");
	return 0;
}

