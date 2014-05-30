// Singleton_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Singleton.h"

int main(int argc, char* argv[])
{
	//Singleton sgn1;//实例化错误
	Singleton* sgn = Singleton::Instance();//通过类名调用函数得到一个对象
	printf("Hello World!\n");
	return 0;
}

