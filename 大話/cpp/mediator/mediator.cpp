#include <string>
#include <iostream>

class Country;
class UnionNations {
public:
    virtual void declare(std::string message, Country* country) = 0;
};

class Country {
private:
    UnionNations* un;

public:
    Country(UnionNations* un);

    virtual UnionNations* getUn();

    virtual void setUn(UnionNations* un);

};

class USA : public Country {
public:
    USA(UnionNations* un);

    virtual void declare(std::string message);

    virtual void getMessage(std::string message);

};

class Iraq : public Country {
public:
    Iraq(UnionNations* un);

    virtual void declare(std::string message);

    virtual void getMessage(std::string message);

};

class UnionNationsSecurityCouncil : public UnionNations {
private:
    USA* usa;
    Iraq* iraq;

public:
    virtual USA* getUsa();

    virtual void setUsa(USA* usa);

    virtual Iraq* getIraq();

    virtual void setIraq(Iraq* iraq);

    virtual void declare(std::string message, Country* country);

};

Iraq::Iraq(UnionNations* un) : Country(un) {
}

void Iraq::declare(std::string message) {
    this->getUn()->declare(message, this);
}

void Iraq::getMessage(std::string message) {
    std::cout << "Iraq has get the message: " << message << std::endl;
}

Country::Country(UnionNations* un) {
    this->un = un;
}

UnionNations* Country::getUn() {
    return un;
}

void Country::setUn(UnionNations* un) {
    this->un = un;
}

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

USA::USA(UnionNations* un) : Country(un) {
}

void USA::declare(std::string message) {
    this->getUn()->declare(message, this);
}

void USA::getMessage(std::string message) {
    std::cout << "USA has get the message: " << message << std::endl;
}

int main(void) {
    UnionNationsSecurityCouncil* unsc = new UnionNationsSecurityCouncil();
    USA* usa = new USA(unsc);
    Iraq* iraq = new Iraq(unsc);
    unsc->setIraq(iraq);
    unsc->setUsa(usa);
    usa->declare("stop the unclear weapon's development!");
    iraq->declare("I have no nuclear wapons!");
    return 0;
}
