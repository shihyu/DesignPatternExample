#include "NormalVoteState.h"

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

					void NormalVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//正常投票
						//记录到投票记录中
						voteManager->getMapVote()->put(user, voteItem);
						puts("恭喜你投票成功");
					}
				}
			}
		}
	}
}
