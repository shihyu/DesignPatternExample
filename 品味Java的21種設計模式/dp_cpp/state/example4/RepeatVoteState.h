#pragma once

#include "VoteState.h"
#include "VoteManager.h"
#include "SpiteVoteState.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example4 {

class RepeatVoteState : public VoteState {
public:
    virtual void vote(std::string user, std::string voteItem, VoteManager *voteManager);
};
}
}
}
}
}