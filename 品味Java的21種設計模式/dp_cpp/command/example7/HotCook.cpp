#include "HotCook.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example7
				{

					HotCook::HotCook(std::string name)
					{
						this->name = name;
					}

					void HotCook::cook(int tableNum, std::string name)
					{
						//每次做菜的时间是不一定的，用个随机数来模拟一下
						int cookTime = static_cast<int>(20 * Math::random());
						puts(this->name+"厨师正在为"+tableNum+"号桌做："+name);
						try
						{
							//让线程休息这么长时间，表示正在做菜
							delay(cookTime);
						}
						catch (InterruptedException *e)
						{
							e->printStackTrace();
						}
						puts(this->name+"厨师为"+tableNum+"号桌做好了："+name+",共计耗时="+cookTime+"秒");
					}

					void HotCook::run()
					{
						while(true)
						{
							//到命令队列里面获取命令对象
							Command *cmd = CommandQueue::getOneCommand();
							if(cmd != 0)
							{
								//说明取到命令对象了，这个命令对象还没有设置接收者
								//因为前面都还不知道到底哪一个厨师来真正执行这个命令
								//现在知道了，就是当前厨师实例，设置到命令对象里面
								cmd->setCookApi(this);
								//然后真正执行这个命令
								cmd->execute();
							}
							//休息1秒
							try
							{
								delay(1000L);
							}
							catch (InterruptedException *e)
							{
								e->printStackTrace();
							}

						}
					}
				}
			}
		}
	}
}