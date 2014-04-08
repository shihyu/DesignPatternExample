#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example1 {
///
/// <summary> * 投票管理 </summary>
///
class VoteManager {
    ///
    ///  <summary> * 记录用户投票的结果,Map<String,String>对应Map<用户名称,投票的选项> </summary>
    ///
private:
    Map<std::string, std::string> *mapVote;
    ///
    ///  <summary> * 记录用户投票次数,Map<String,Integer>对应Map<用户名称,投票的次数> </summary>
    ///
    Map<std::string, int> *mapVoteCount;
    ///
    ///  <summary> * 投票 </summary>
    ///  * <param name="user"> 投票人，为了简单，就是用户名称 </param>
    ///  * <param name="voteItem"> 投票的选项 </param>
    ///
public:
    virtual void vote(std::string user, std::string voteItem);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            mapVote = std::map<std::string, std::string>();
            mapVoteCount = std::map<std::string, int>();

            initialized = true;
        }
    }

public:
    VoteManager() {
        InitializeInstanceFields();
    }
};

}
}
}
}
}