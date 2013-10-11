#include "BlackWarnVoteState.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example4
				{

					void BlackWarnVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//待进黑名单警告状态
						puts("禁止登录和使用系统3天");

						//待进黑名单警告状态处理完成，维护下一个状态，投票到10次，就进黑名单了
						//注意这里是判断大于等于9，因为这里设置的是下一个状态
						//下一个操作次数就是10了，就应该算是进黑名单了
						if(voteManager->getMapVoteCount()->get(user) >= 9)
						{
							voteManager->getMapState()->put(user, new BlackVoteState());
						}
					}
				}
			}
		}
	}
}
