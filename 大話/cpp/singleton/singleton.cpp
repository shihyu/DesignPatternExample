#include <string>

class Person {
private:
    std::string name;
    Person* child;

    Person(std::string name);

public:
    virtual Person* createInstance();

    virtual std::string getName();

    virtual void setName(std::string name);
};

Person::Person(std::string name) {
    this->name = name;
}

Person* Person::createInstance() {
    if (child == 0) {
        child = new Person("lincoln");
    }

    return child;
}

std::string Person::getName() {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}

int main(int argc, char* argv[]) {
    return 0;
}
