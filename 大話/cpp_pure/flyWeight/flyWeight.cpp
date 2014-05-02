#include <string>
#include <iostream>
#include <map>

class User {
private:
    std::string name;

public:
    User(std::string name);

    virtual std::string getName();

    virtual void setName(std::string name);
};

class WebSite {
public:
    virtual void use(User* u) = 0;
};

class ConcreteWebSite : public WebSite {
private:
    std::string name;

public:
    ConcreteWebSite(std::string name);

    virtual void use(User* u);

    virtual std::string getName();

    virtual void setName(std::string name);

};

class WebSiteFactory {
private:
    std::map<std::string, WebSite*> flyWeights;

    //this is the key method ,it confirm that there is only one instance of the same website.
public:
    virtual WebSite* getWebSiteCategory(std::string key);

    virtual int getWebSiteCount();

private:
    bool initialized;
#if 0
    void InitializeInstanceFields() {
        if (! initialized) {
            flyWeights = std::map<std::string, WebSite*>();
            initialized = true;
        }
    }
#endif

public:
    WebSiteFactory() {
        //InitializeInstanceFields();
    }
};

ConcreteWebSite::ConcreteWebSite(std::string name) {
    this->name = name;
}

void ConcreteWebSite::use(User* u) {
    std::cout << "the type of Website: " + name + " user: " + u->getName() << std::endl;
}

std::string ConcreteWebSite::getName() {
    return name;
}

void ConcreteWebSite::setName(std::string name) {
    this->name = name;
}

WebSite* WebSiteFactory::getWebSiteCategory(std::string key) {
    // if (!flyWeights.containsKey(key)) {
    if (flyWeights.find(key) == flyWeights.end()) {
        flyWeights.insert(std::pair<std::string, WebSite*>(key, new ConcreteWebSite(key)));
    }

    return flyWeights.find(key)->second;
}

int WebSiteFactory::getWebSiteCount() {
    return flyWeights.size();
}

User::User(std::string name) {
    this->name = name;
}

std::string User::getName() {
    return name;
}

void User::setName(std::string name) {
    this->name = name;
}

int main(void) {
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
    //puts(wf->getWebSiteCount());
    return 0;
}

