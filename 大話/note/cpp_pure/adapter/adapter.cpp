#include <string>
#include <iostream>

class Player {
private:
    std::string name;

public:
    virtual std::string getName();

    virtual void setName(std::string name);

    virtual void attrack();

    virtual void defence();
};

class Center : public Player {

public:
    Center(std::string name);

    virtual void jinggong();

    virtual void fangshou();
};


class Guard : public Player {

public:
    Guard(std::string name);

    virtual void attrack();

    virtual void defence();
};

class Translator : public Player {
public:
    Center* wjzf;

    Translator(std::string name);

    virtual void attrack();

    virtual void defence();
};

class AdapterMain {

    ///
    ///   * <param name="args"> </param>
    ///
    static void main(std::string args[]);

};

Translator::Translator(std::string name) {
    wjzf = new Center(name);
}

void Translator::attrack() {
    wjzf->jinggong();
}

void Translator::defence() {
    wjzf->fangshou();
}

Center::Center(std::string name) {
    this->setName(name);
}

void Center::jinggong() {
    std::cout << this->getName() + std::string(" jinggong") << std::endl;
}

void Center::fangshou() {
    std::cout << this->getName() + std::string(" fangshou") << std::endl;
}

std::string Player::getName() {
    return name;
}

void Player::setName(std::string name) {
    this->name = name;
}

void Player::attrack() {
}

void Player::defence() {
}

Guard::Guard(std::string name) {
    this->setName(name);
}

void Guard::attrack() {
    std::cout << this->getName() + std::string(" attrack") << std::endl;
}

void Guard::defence() {
    std::cout << this->getName() + std::string(" defence") << std::endl;
}

int main() {
    Player* guard = new Guard("Alston");
    guard->attrack();
    guard->defence();
    Player* center = new Translator("YM");
    center->attrack();
    center->defence();
    return 0;
}

