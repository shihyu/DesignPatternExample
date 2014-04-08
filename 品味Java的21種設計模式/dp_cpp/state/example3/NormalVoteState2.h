#pragma once

#include "NormalVoteState.h"
#include "VoteManager.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example3 {

class NormalVoteState2 : public NormalVoteState {
public:
    virtual void vote(std::string user, std::string voteItem, VoteManager *voteManager);
};

}
}
}
}
}