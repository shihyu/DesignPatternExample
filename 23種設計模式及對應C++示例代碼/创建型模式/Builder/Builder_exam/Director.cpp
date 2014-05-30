// Director.cpp: implementation of the Director class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Director.h"
#include "Builder.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


Director::Director(Builder* bld)
{
	cout<<"得到相关定制参数，正在生成创建工厂,";
	_bld = bld;
}

Director::~Director()
{

}

Product* Director::Construct()
{
    cout<<"创建工厂已经生成，开始逐步构建产品"<<endl;
	return _bld->GetProduct();
}
