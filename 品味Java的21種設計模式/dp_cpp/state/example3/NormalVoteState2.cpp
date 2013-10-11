#include "NormalVoteState2.h"

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

					void NormalVoteState2::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//先调用已有的功能
						NormalVoteState::vote(user, voteItem, voteManager);
						//给予积分奖励，示意一下
						puts("奖励积分10分");
					}
				}
			}
		}
	}
}
