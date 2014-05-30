// Builder.cpp: implementation of the Builder class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Builder.h"
#include "Product.h"


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


Builder::Builder()
{

}

Builder::~Builder()
{

}

ConcreteBuilder::ConcreteBuilder()
{

}

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuildPartA(const string& buildPara)
{
	cout<<"产品创建第一步..."<<buildPara<<endl;
	pt.setPart1(buildPara);
}

void ConcreteBuilder::BuildPartB(const string& buildPara)
{
	cout<<"产品创建第二步..."<<buildPara<<endl;
	pt.setPart2(buildPara);
}

void ConcreteBuilder::BuildPartC(const string& buildPara)
{
	cout<<"产品创建第三步..."<<buildPara<<endl;
	pt.setPart3(buildPara);
}

Product* ConcreteBuilder::GetProduct()
{
	BuildPartA("第一步参数表");
	BuildPartB("第二步参数表");
	BuildPartC("第三步参数表");
	cout<<"成功得到一个产品"<<endl;
	return new Product();
}
