#pragma once

#include "VoteState.h"
#include "NormalVoteState.h"
#include "RepeatVoteState.h"
#include "SpiteVoteState.h"
#include "BlackWarnVoteState.h"
#include "BlackVoteState.h"
#include <string>

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
					///
					/// <summary> * 投票管理 </summary>
					/// 
					class VoteManager2
					{
					///	
					///	 <summary> * 持有状态处理对象 </summary>
					///	 
					private:
						VoteState *state;
					///	
					///	 <summary> * 记录用户投票的结果,Map<String,String>对应Map<用户名称,投票的选项> </summary>
					///	 
						Map<std::string, std::string> *mapVote;
					///	
					///	 <summary> * 记录用户投票次数,Map<String,Integer>对应Map<用户名称,投票的次数> </summary>
					///	 
						Map<std::string, int> *mapVoteCount;

					///	
					///	 <summary> * 获取记录用户投票结果的Map </summary>
					///	 * <returns> 记录用户投票结果的Map </returns>
					///	 
					public:
						virtual Map<std::string, std::string> *getMapVote();

					///	
					///	 <summary> * 投票 </summary>
					///	 * <param name="user"> 投票人，为了简单，就是用户名称 </param>
					///	 * <param name="voteItem"> 投票的选项 </param>
					///	 
						virtual void vote(std::string user, std::string voteItem);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								mapVote = std::map<std::string, std::string>();
								mapVoteCount = std::map<std::string, int>();

								initialized = true;
							}
						}

public:
	VoteManager2()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}