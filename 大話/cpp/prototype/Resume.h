#pragma once

#include <string>

namespace prototype {

class Resume : public Cloneable {
private:
    std::string name;
    std::string sex;
    std::string age;

public:
    Resume(std::string name);

    virtual std::string getName();

    virtual void setName(std::string name);

    virtual std::string getSex();

    virtual void setSex(std::string sex);

    virtual std::string getAge();

    virtual void setAge(std::string age);

    virtual std::string ToString();

    virtual Resume *clone();
};

}