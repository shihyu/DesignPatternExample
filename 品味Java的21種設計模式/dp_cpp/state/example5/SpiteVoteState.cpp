#include "SpiteVoteState.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example5
				{

					void SpiteVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//恶意投票
						//取消用户的投票资格，并取消投票记录
						std::string s = voteManager->getMapVote()->get(user);
						if(s!="")
						{
							voteManager->getMapVote()->remove(user);
						}
						puts("你有恶意刷票行为，取消投票资格");

						//恶意投票完成，维护下一个状态，投票到8次，就进黑名单了
						//注意这里是判断大于等于7，因为这里设置的是下一个状态
						//下一个操作次数就是8了，就应该算是进黑名单了
						if(voteManager->getMapVoteCount()->get(user) >= 7)
						{
										//			voteManager.getMapState().put(user, new BlackVoteState());
						}
					}
				}
			}
		}
	}
}