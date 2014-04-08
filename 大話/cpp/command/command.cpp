#include <string>
#include <iostream>
#include <vector>

class CommandMain {

    ///
    ///   * <param name="args"> </param>
    ///
    static void main(std::string args[]);

};

class Barbecuer {

public:
    virtual void bakeMutton();

    virtual void bakeChickenWing();
};


class Command {

private:
    Barbecuer *barbecuer;
public:
    Command(Barbecuer *bar);

    virtual void excuteCommand() = 0;

    virtual Barbecuer *getBarbecuer();

    virtual void setBarbecuer(Barbecuer *barbecuer);
};


class BakeMuttonCommand : public Command {

public:
    BakeMuttonCommand(Barbecuer *bar);

    virtual void excuteCommand();

};

class BakeChickenWingCommand : public Command {

public:
    BakeChickenWingCommand(Barbecuer *bar);

    virtual void excuteCommand();

};


class Waiter {
public:
    std::vector<Command *> orders;

    virtual void setOrder(Command *com);

    virtual void cancelOrder(Command *com);
    virtual void excute();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            orders = std::vector<Command *>();
            initialized = true;
        }
    }

public:
    Waiter() {
        InitializeInstanceFields();
    }
};

void Waiter::setOrder(Command *com) {
    orders.push_back(com);
    // std::cout << "add an order " + std::string(new Date()) << std::endl;
}

void Waiter::cancelOrder(Command *com) {
    // orders.remove(com);
    for (std::vector<Command *>::iterator it = orders.begin(); it != orders.end();) {
        if (*it == com) {
            it = orders.erase(it);
        } else {
            ++it;
        }
    }

    // std::cout << "Cancel the order " + std::string(new Date()) << std::endl;
}

void Waiter::excute() {
    for (std::vector<Command *>::const_iterator c = orders.begin(); c != orders.end(); ++c) {
        (*c)->excuteCommand();
    }
}

BakeMuttonCommand::BakeMuttonCommand(Barbecuer *bar) : Command(bar) {
}

void BakeMuttonCommand::excuteCommand() {
    this->getBarbecuer()->bakeMutton();
}

void Barbecuer::bakeMutton() {
    std::cout << "Bake the mutton!" << std::endl;
}

void Barbecuer::bakeChickenWing() {
    std::cout << "Bake the chicken wing!" << std::endl;
}

BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer *bar) : Command(bar) {
}

void BakeChickenWingCommand::excuteCommand() {
    this->getBarbecuer()->bakeChickenWing();
}

Command::Command(Barbecuer *bar) {
    this->barbecuer = bar;
}

Barbecuer *Command::getBarbecuer() {
    return barbecuer;
}

void Command::setBarbecuer(Barbecuer *barbecuer) {
    this->barbecuer = barbecuer;
}

int main() {
    Barbecuer *boy = new Barbecuer();
    Command *com1 = new BakeMuttonCommand(boy);
    Command *com2 = new BakeMuttonCommand(boy);
    Command *com3 = new BakeChickenWingCommand(boy);
    Waiter *waiter = new Waiter();
    waiter->setOrder(com1);
    waiter->setOrder(com2);
    waiter->setOrder(com3);
    waiter->excute();
    waiter->cancelOrder(com2);
    waiter->excute();
    return 0;
}

