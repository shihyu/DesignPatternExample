#include "UnionNationsSecurityCouncil.h"

namespace mediator {

    USA* UnionNationsSecurityCouncil::getUsa() {
        return usa;
    }

    void UnionNationsSecurityCouncil::setUsa(USA* usa) {
        this->usa = usa;
    }

    Iraq* UnionNationsSecurityCouncil::getIraq() {
        return iraq;
    }

    void UnionNationsSecurityCouncil::setIraq(Iraq* iraq) {
        this->iraq = iraq;
    }

    void UnionNationsSecurityCouncil::declare(std::string message, Country* country) {
        if (dynamic_cast<USA*>(country) != 0) {
            iraq->getMessage(message);
        } else {
            usa->getMessage(message);
        }
    }
}