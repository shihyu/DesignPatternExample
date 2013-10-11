#include "NormalVoteState.h"

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

					void NormalVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//正常投票
						//记录到投票记录中
						voteManager->getMapVote()->put(user, voteItem);
						puts("恭喜你投票成功");

						//正常投票完成，维护下一个状态，同一个人再投票就重复了
						voteManager->getMapState()->put(user, new RepeatVoteState());
					}
				}
			}
		}
	}
}