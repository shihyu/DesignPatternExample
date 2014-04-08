#include "VoteManager.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example5 {

Map<std::string, VoteState *> *VoteManager::getMapState() {
    return mapState;
}

Map<std::string, std::string> *VoteManager::getMapVote() {
    return mapVote;
}

Map<std::string, int> *VoteManager::getMapVoteCount() {
    return mapVoteCount;
}

void VoteManager::vote(std::string user, std::string voteItem) throw(Exception) {
    //1：先为该用户增加投票的次数
    //先从记录中取出已有的投票次数
    int oldVoteCount = mapVoteCount->get(user);

    if (oldVoteCount == 0) {
        oldVoteCount = 0;
    }

    oldVoteCount = oldVoteCount + 1;
    mapVoteCount->put(user, oldVoteCount);

    VoteState *state = 0;
    //2：直接从数据库获取该用户对应的下一个状态的状态编码
    std::string stateId = "从数据库中获取这个值";
    //开始根据状态编码来创建需用的状态对象

    //根据状态编码去获取相应的类
    std::string className = "根据状态编码去获取相应的类";
    //使用反射创建对象实例，简单示意一下
    Class *c = Class::forName(className);
    state = static_cast<VoteState *>(c->newInstance());

    if ((new std::string("正常投票"))->equals(stateId)) {
        state = new NormalVoteState();
    } else if ((new std::string("重复投票"))->equals(stateId)) {
        state = new RepeatVoteState();
    } else if ((new std::string("恶意投票"))->equals(stateId)) {
        state = new SpiteVoteState();
    } else if ((new std::string("黑名单"))->equals(stateId)) {
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
