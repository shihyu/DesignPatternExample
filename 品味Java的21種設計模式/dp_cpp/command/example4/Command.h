#pragma once

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
					///
					/// <summary> * 命令接口，声明执行的操作，支持可撤销操作 </summary>
					/// 
					class Command
					{
					///	
					///	 <summary> * 执行命令对应的操作 </summary>
					///	 
					public:
						virtual public void execute() = 0;
					///	
					///	 <summary> * 执行撤销命令对应的操作 </summary>
					///	 
						virtual public void undo() = 0;
					};

				}
			}
		}
	}
}