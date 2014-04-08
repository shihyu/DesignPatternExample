#pragma once

#include "VoteManager.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example3 {
///
/// <summary> * 封装一个投票状态相关的行为 </summary>
///
class VoteState {
    ///
    ///  <summary> * 处理状态对应的行为 </summary>
    ///  * <param name="user"> 投票人 </param>
    ///  * <param name="voteItem"> 投票项 </param>
    ///  * <param name="voteManager"> 投票上下文，用来在实现状态对应的功能处理的时候，
    ///  *                    可以回调上下文的数据 </param>
    ///
public:
    virtual public void vote(std::string, std::string, VoteManager *) = 0;
};
}
}
}
}
}