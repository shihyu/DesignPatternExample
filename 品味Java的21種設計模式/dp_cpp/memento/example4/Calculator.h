#pragma once

#include "Command.h"
#include "Memento.h"
#include <vector>

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
					/// <summary> * 计算器类，计算器上有加法按钮、减法按钮，还有撤销和恢复的按钮 </summary>
					/// 
					class Calculator
					{
					///	
					///	 <summary> * 命令的操作的历史记录，在撤销时候用 </summary>
					///	 
					private:
						std::vector<Command*> undoCmds;
					///	
					///	 <summary> * 命令被撤销的历史记录，在恢复时候用 </summary>
					///	 
						std::vector<Command*> redoCmds;
					///	
					///	 <summary> * 命令操作对应的备忘录对象的历史记录，在撤销时候用
					///	 * 由于对于每个命令对象，撤销和重做的状态是不一样的，
					///	 * 撤销是回到命令操作前的状态，而重做是回到命令操作后的状态，
					///	 * 因此对每一个命令，使用一个备忘录对象的数组来记录对应的状态 </summary>
					///	 
						std::vector<Memento[]> undoMementos;
					///	
					///	 <summary> * 被撤销命令对应的备忘录对象的历史记录，在恢复时候用,
					///	 * 数组有两个元素，第一个是命令执行前的状态，第二个是命令执行后的状态 </summary>
					///	 
						std::vector<Memento[]> redoMementos;

						Command *addCmd;
						Command *substractCmd;
					public:
						virtual void setAddCmd(Command *addCmd);
						virtual void setSubstractCmd(Command *substractCmd);
						virtual void addPressed();
						virtual void substractPressed();
						virtual void undoPressed();
						virtual void redoPressed();

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								undoCmds = std::vector<Command*>();
								redoCmds = std::vector<Command*>();
								undoMementos = std::vector<Memento[]>();
								redoMementos = std::vector<Memento[]>();

								initialized = true;
							}
						}

public:
	Calculator()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}