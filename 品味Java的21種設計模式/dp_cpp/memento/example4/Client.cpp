#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//1：组装命令和接收者
						//创建接收者
						OperationApi *operation = new Operation();
						//创建命令
						AddCommand *addCmd = new AddCommand(5);
						SubstractCommand *substractCmd = new SubstractCommand(3);
						//组装命令和接收者
						addCmd->setOperation(operation);
						substractCmd->setOperation(operation);

						//2：把命令设置到持有者，就是计算器里面
						Calculator *calculator = new Calculator();
						calculator->setAddCmd(addCmd);
						calculator->setSubstractCmd(substractCmd);

						//3:模拟按下按钮，测试一下
						calculator->addPressed();
						puts("一次加法运算后的结果为："+operation->getResult());
						calculator->substractPressed();
						puts("一次减法运算后的结果为："+operation->getResult());

						//测试撤消
						calculator->undoPressed();
						puts("撤销一次后的结果为："+operation->getResult());
						calculator->undoPressed();
						puts("再撤销一次后的结果为："+operation->getResult());

						//测试恢复
						calculator->redoPressed();
						puts("恢复操作一次后的结果为："+operation->getResult());
						calculator->redoPressed();
						puts("再恢复操作一次后的结果为："+operation->getResult());
					}
				}
			}
		}
	}
}