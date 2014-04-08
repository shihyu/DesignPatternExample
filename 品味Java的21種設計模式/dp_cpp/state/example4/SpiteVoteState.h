#pragma once

#include "VoteState.h"
#include "VoteManager.h"
#include "BlackVoteState.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example4 {

class SpiteVoteState : public VoteState {
public:
    virtual void vote(std::string user, std::string voteItem, VoteManager *voteManager);
};
}
}
}
}
}