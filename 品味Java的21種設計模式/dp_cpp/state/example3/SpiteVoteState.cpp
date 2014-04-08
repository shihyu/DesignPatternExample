#include "SpiteVoteState.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example3 {

void SpiteVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager) {
    //恶意投票
    //取消用户的投票资格，并取消投票记录
    std::string s = voteManager->getMapVote()->get(user);

    if (s != "") {
        voteManager->getMapVote()->remove(user);
    }

    puts("你有恶意刷票行为，取消投票资格");
}
}
}
}
}
}
