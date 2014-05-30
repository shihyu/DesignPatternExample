// ChainOfResponsibility_exam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Request.h"
#include "Handle.h"

int main(int argc, char* argv[])
{
	HandleChain hc;//生成一个链条，在应用时可以根据需要定义链条
	
	Request* que= new Request();//生成一个问题
	que->setRequestName("打豆豆");//当然可以在构造问题时提供，本例没有这样做
	que->setRequestLeverl(2);//当然可以在构造问题时提供，本例没有这样做*/
	hc.setRequest(que);//问题送入链条

	que->setRequestLeverl(15);//更改问题级别
	hc.setRequest(que);

	//printf("Hello World!\n");
	return 0;
}

