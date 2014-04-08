#pragma once

#include "VoteState.h"
#include "VoteManager.h"
#include "RepeatVoteState.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example5 {

class NormalVoteState : public VoteState {
public:
    virtual void vote(std::string user, std::string voteItem, VoteManager *voteManager);
};

}
}
}
}
}