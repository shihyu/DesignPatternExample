#include <string>
#include <iostream>

class MobileSoft {
public:
    virtual void run() = 0;
};

class Mobile {
private:
    MobileSoft *soft;
    std::string brand;

public:
    Mobile(std::string brand);

    virtual MobileSoft *getSoft();

    virtual void setSoft(MobileSoft *soft);

    virtual std::string getBrand();

    virtual void setBrand(std::string brand);

    virtual void run() = 0;
};

class MobileMp3 : public MobileSoft {
public:
    virtual void run();

};

class MotoMible : public Mobile {
public:
    MotoMible(std::string brand);

    virtual void run();

};

class MobileGame : public MobileSoft {
public:
    virtual void run();

};

class NokiaMobile : public Mobile {
public:
    NokiaMobile(std::string brand);

    virtual void run();
};

MotoMible::MotoMible(std::string brand)
    : Mobile(brand) {
}

void MotoMible::run() {
    std::cout << "Moto Mobile: " << std::endl;
    this->getSoft()->run();
}

NokiaMobile::NokiaMobile(std::string brand)
    : Mobile(brand) {
}

void NokiaMobile::run() {
    std::cout << "Nokia Mobile: " << std::endl;
    this->getSoft()->run();
}

void MobileGame::run() {
    std::cout << "run mobile game!" << std::endl;
}

void MobileMp3::run() {
    std::cout << "run mobile mp3!" << std::endl;
}

Mobile::Mobile(std::string brand) {
    this->brand = brand;
}

MobileSoft *Mobile::getSoft() {
    return soft;
}

void Mobile::setSoft(MobileSoft *soft) {
    this->soft = soft;
}

std::string Mobile::getBrand() {
    return brand;
}

void Mobile::setBrand(std::string brand) {
    this->brand = brand;
}

int main() {
    Mobile *nokia = new NokiaMobile("Nokia");
    MobileSoft *game = new MobileGame();
    nokia->setSoft(game);
    nokia->run();
    Mobile *moto = new MotoMible("Moto");
    MobileSoft *mp3 = new MobileMp3();
    moto->setSoft(mp3);
    moto->run();
    return 0;
}
