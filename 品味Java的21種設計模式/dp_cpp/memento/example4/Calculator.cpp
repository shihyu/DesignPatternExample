#include "Calculator.h"

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

					void Calculator::setAddCmd(Command *addCmd)
					{
						this->addCmd = addCmd;
					}

					void Calculator::setSubstractCmd(Command *substractCmd)
					{
						this->substractCmd = substractCmd;
					}

					void Calculator::addPressed()
					{
						//获取对应的备忘录对象，并保存在相应的历史记录里面
						Memento *m1 = this->addCmd->createMemento();

						//执行命令
						this->addCmd->execute();

						//把操作记录到历史记录里面
						undoCmds.push_back(this->addCmd);

						//获取执行命令后的备忘录对象
						Memento *m2 = this->addCmd->createMemento();
						//设置到撤销的历史记录里面
						this->undoMementos.push_back(new Memento[]{m1,m2});
					}

					void Calculator::substractPressed()
					{
						//获取对应的备忘录对象，并保存在相应的历史记录里面		
						Memento *m1 = this->substractCmd->createMemento();

						//执行命令
						this->substractCmd->execute();

						//把操作记录到历史记录里面
						undoCmds.push_back(this->substractCmd);

						//获取执行命令后的备忘录对象
						Memento *m2 = this->substractCmd->createMemento();
						//设置到撤销的历史记录里面
						this->undoMementos.push_back(new Memento[]{m1,m2});
					}

					void Calculator::undoPressed()
					{
						if(undoCmds.size()>0)
						{
							//取出最后一个命令来撤销
							Command *cmd = undoCmds.back();
							//获取对应的备忘录对象
//ORIGINAL LINE: Memento[] ms = undoMementos.get(undoCmds.size()-1);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
							Memento *ms = undoMementos.at(undoCmds.size() - 1);

							//撤销
							cmd->undo(ms[0]);

							//如果还有恢复的功能，那就把这个命令记录到恢复的历史记录里面
							redoCmds.push_back(cmd);
							//把相应的备忘录对象也添加过去
							redoMementos.push_back(ms);

							//然后把最后一个命令删除掉，
							undoCmds.remove(cmd);
							//把相应的备忘录对象也删除掉
							undoMementos.remove(ms);
						}
						else
						{
							puts("很抱歉，没有可撤销的命令");
						}
					}

					void Calculator::redoPressed()
					{
						if(redoCmds.size()>0)
						{
							//取出最后一个命令来重做
							Command *cmd = redoCmds.back();
							//获取对应的备忘录对象
//ORIGINAL LINE: Memento[] ms = redoMementos.get(redoCmds.size()-1);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
							Memento *ms = redoMementos.at(redoCmds.size() - 1);

							//重做
							cmd->redo(ms[1]);

							//把这个命令记录到可撤销的历史记录里面
							undoCmds.push_back(cmd);
							//把相应的备忘录对象也添加过去
							undoMementos.push_back(ms);
							//然后把最后一个命令删除掉
							redoCmds.remove(cmd);
							//把相应的备忘录对象也删除掉
							redoMementos.remove(ms);
						}
						else
						{
							puts("很抱歉，没有可恢复的命令");
						}
					}
				}
			}
		}
	}
}
