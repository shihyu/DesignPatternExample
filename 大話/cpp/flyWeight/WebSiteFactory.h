#pragma once

#include "WebSite.h"
#include "ConcreteWebSite.h"
#include <string>

namespace flyWeight {


class WebSiteFactory {

private:
    Map<std::string, WebSite *> *flyWeights;

    //this is the key method ,it confirm that there is only one instance of the same website.
public:
    virtual WebSite *getWebSiteCategory(std::string key);

    virtual int getWebSiteCount();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            flyWeights = std::map<std::string, WebSite *>();
            initialized = true;
        }
    }

public:
    WebSiteFactory() {
        InitializeInstanceFields();
    }
};

}