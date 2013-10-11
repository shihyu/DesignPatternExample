#include "VoteManager.h"

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

					Map<std::string, std::string> *VoteManager::getMapVote()
					{
						return mapVote;
					}

					Map<std::string, VoteState*> *VoteManager::getMapState()
					{
						return mapState;
					}

					Map<std::string, int> *VoteManager::getMapVoteCount()
					{
						return mapVoteCount;
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

						//2：获取该用户的投票状态
						VoteState *state = mapState->get(user);
						//如果没有投票状态，说明还没有投过票，就初始化一个正常投票状态
						if(state==0)
						{
							state = new NormalVoteState();
						}

						//然后转调状态对象来进行相应的操作
						state->vote(user, voteItem, this);
					}
				}
			}
		}
	}
}
