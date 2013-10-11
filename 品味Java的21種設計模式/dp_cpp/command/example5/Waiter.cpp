#include "Waiter.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example5
				{

					void Waiter::orderDish(Command *cmd)
					{
						//客户传过来的命令对象是没有和接收者组装的
						//在这里组装吧
						CookApi *hotCook = new HotCook();
						CookApi *coolCook = new CoolCook();
						//判读到底是组合凉菜师傅还是热菜师傅
						//简单点根据命令的原始对象的类型来判断
						if(dynamic_cast<DuckCommand*>(cmd) != 0)
						{
							(static_cast<DuckCommand*>(cmd))->setCookApi(hotCook);
						}
						else if(dynamic_cast<ChopCommand*>(cmd) != 0)
						{
							(static_cast<ChopCommand*>(cmd))->setCookApi(hotCook);
						}
						else if(dynamic_cast<PorkCommand*>(cmd) != 0)
						{
							//这是个凉菜，所以要组合凉菜的师傅
							(static_cast<PorkCommand*>(cmd))->setCookApi(coolCook);
						}
						//添加到菜单中
						menuCommand->addCommand(cmd);
					}

					void Waiter::orderOver()
					{
						this->menuCommand->execute();
					}
				}
			}
		}
	}
}
