#include "VoteManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example1
				{

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

						//2：判断该用户投票的类型，到底是正常投票、重复投票、恶意投票还是上黑名单
						//然后根据投票类型来进行相应的操作	
						if(oldVoteCount==1)
						{
							//正常投票
							//记录到投票记录中
							mapVote->put(user, voteItem);
							puts("恭喜你投票成功");
						}
						else if(oldVoteCount>1 && oldVoteCount<5)
						{
							//重复投票
							//暂时不做处理
							puts("请不要重复投票");
						}
						else if(oldVoteCount >= 5 && oldVoteCount<8)
						{
							//恶意投票
							//取消用户的投票资格，并取消投票记录
							std::string s = mapVote->get(user);
							if(s!="")
							{
								mapVote->remove(user);
							}
							puts("你有恶意刷票行为，取消投票资格");
						}
						else if(oldVoteCount>=8)
						{
							//黑名单
							//记入黑名单中，禁止登录系统了
							puts("进入黑名单，将禁止登录和使用本系统");
						}
					}
				}
			}
		}
	}
}