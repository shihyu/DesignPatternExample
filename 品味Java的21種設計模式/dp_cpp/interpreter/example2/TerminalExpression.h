#pragma once

#include "AbstractExpression.h"
#include "Context.h"

namespace cn {
namespace javass {
namespace dp {
namespace interpreter {
namespace example2 {
///
/// <summary> * 终结符表达式 </summary>
///
class TerminalExpression : public AbstractExpression {

public:
    virtual void interpret(Context *ctx);
};
}
}
}
}
}