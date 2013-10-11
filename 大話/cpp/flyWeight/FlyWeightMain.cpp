#include "FlyWeightMain.h"

namespace flyWeight {

    void FlyWeightMain::main(std::string args[]) {
        WebSiteFactory* wf = new WebSiteFactory();
        WebSite* wb1 = wf->getWebSiteCategory("show product");
        wb1->use(new User("Lincoln"));
        WebSite* wb2 = wf->getWebSiteCategory("Blog");
        wb2->use(new User("Lincoln"));
        WebSite* wb3 = wf->getWebSiteCategory("Society");
        wb3->use(new User("Lincoln"));
        WebSite* wb4 = wf->getWebSiteCategory("Group");
        wb4->use(new User("Lincoln"));
        WebSite* wb5 = wf->getWebSiteCategory("Group");
        wb5->use(new User("Kenny"));
        puts(wf->getWebSiteCount());
    }
}