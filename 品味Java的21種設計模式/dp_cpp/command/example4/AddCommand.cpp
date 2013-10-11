#include "AddCommand.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example4
				{

					AddCommand::AddCommand(OperationApi *operation, int opeNum)
					{
						this->operation = operation;
						this->opeNum = opeNum;
					}

					void AddCommand::execute()
					{
						//转调接收者去真正执行功能，这个命令是做加法
						this->operation->add(opeNum);
					}

					void AddCommand::undo()
					{
						//转调接收者去真正执行功能
						//命令本身是做加法，那么撤销的时候就是做减法了
						this->operation->substract(opeNum);
					}
				}
			}
		}
	}
}