#include "Expression.h"

namespace interpreter {

void Expression::interpret(PlayContext *context) {
    if (context->getContext().length() == 0) {
        return;
    } else {
        std::string playKey = context->getContext().substr(0, 1);
        context->setContext(context->getContext().substr(2));
        double playValue = static_cast<double>(context->getContext().substr(0, context->getContext().find(" ")));
        context->setContext(context->getContext().substr(context->getContext().find(" ") + 1));
        excute(playKey, playValue);
    }
}
}