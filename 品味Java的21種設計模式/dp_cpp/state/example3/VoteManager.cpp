#include "VoteManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example3
				{

					Map<std::string, std::string> *VoteManager::getMapVote()
					{
						return mapVote;
					}

					void VoteManager::vote(std::string user, std::string voteItem)
					{
						//1：先为该用户增加投票的次数
						//先从记录中取出已有的投票次数
						int oldVoteCount = mapVoteCount->get(user);
						if(oldVoteCount==0)
						{
							oldVoteCount = 0;
						}
						oldVoteCount = oldVoteCount + 1;
						mapVoteCount->put(user, oldVoteCount);

						//2：判断该用户投票的类型，就相当于是判断对应的状态
						//到底是正常投票、重复投票、恶意投票还是上黑名单的状态
						if(oldVoteCount==1)
						{
							state = new NormalVoteState();
						}
						else if(oldVoteCount>1 && oldVoteCount<5)
						{
							state = new RepeatVoteState();
						}
						else if(oldVoteCount >= 5 && oldVoteCount<8)
						{
							state = new SpiteVoteState();
						}
						else if(oldVoteCount>=8)
						{
							state = new BlackVoteState();
						}
						//然后转调状态对象来进行相应的操作
						state->vote(user, voteItem, this);
					}
				}
			}
		}
	}
}
