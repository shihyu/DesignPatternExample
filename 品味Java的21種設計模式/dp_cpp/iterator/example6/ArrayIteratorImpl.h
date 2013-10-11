#pragma once

#include "Iterator.h"
#include "PayModel.h"
#include "SalaryManager.h"
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example6
				{


					///
					/// <summary> * 用来实现访问数组的迭代接口,加入了迭代策略 </summary>
					/// 
					class ArrayIteratorImpl : public Iterator
					{
					///	
					///	 <summary> * 用来存放被迭代的数组 </summary>
					///	 
					private:
//ORIGINAL LINE: private PayModel[] pms = nullptr;
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						PayModel *pms;
					///	
					///	 <summary> * 用来记录当前迭代到的位置索引 </summary>
					///	 
						int index;

					public:
						ArrayIteratorImpl(SalaryManager *aggregate);


						virtual bool hasNext();


						virtual object *next();


						virtual void remove();
					};

				}
			}
		}
	}
}