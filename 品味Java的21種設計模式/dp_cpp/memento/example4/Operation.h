#pragma once

#include "OperationApi.h"
#include "Memento.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example4
				{
					///
					/// <summary> * 运算类，真正实现加减法运算 </summary>
					/// 
					class Operation : public OperationApi
					{
					///	
					///	 <summary> * 记录运算的结果 </summary>
					///	 
					private:
						int result;
					public:
						virtual int getResult();

						virtual void add(int num);
						virtual void substract(int num);
						virtual Memento *createMemento();
						virtual void setMemento(Memento *memento);
					///	
					///	 <summary> * 备忘录对象 </summary>
					///	 
					private:
						class MementoImpl : public Memento
						{
						private:
							int result;
						public:
							MementoImpl(int result);

							virtual int getResult();
						};
					};

				}
			}
		}
	}
}