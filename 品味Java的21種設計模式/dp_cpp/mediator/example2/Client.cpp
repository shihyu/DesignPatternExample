#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//1：创建中介者——主板对象
						MotherBoard *mediator = new MotherBoard();
						//2：创建同事类
						CDDriver *cd = new CDDriver(mediator);
						CPU *cpu = new CPU(mediator);
						VideoCard *vc = new VideoCard(mediator);
						SoundCard *sc = new SoundCard(mediator);
						//3：让中介者知道所有的同事
						mediator->setCdDriver(cd);
						mediator->setCpu(cpu);
						mediator->setVideoCard(vc);
						mediator->setSoundCard(sc);

						//4：开始看电影，把光盘放入光驱，光驱开始读盘
						cd->readCD();
					}
				}
			}
		}
	}
}
