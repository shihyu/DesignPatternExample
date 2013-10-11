#include "WebSiteFactory.h"

namespace flyWeight {

    WebSite* WebSiteFactory::getWebSiteCategory(std::string key) {
        if (!flyWeights->containsKey(key)) {
            flyWeights->put(key, new ConcreteWebSite(key));
        }

        return flyWeights->get(key);
    }

    int WebSiteFactory::getWebSiteCount() {
        return flyWeights->size();
    }
}