#include "Resume.h"

namespace prototype {

Resume::Resume(std::string name) {
    this->name = name;
}

std::string Resume::getName() {
    return name;
}

void Resume::setName(std::string name) {
    this->name = name;
}

std::string Resume::getSex() {
    return sex;
}

void Resume::setSex(std::string sex) {
    this->sex = sex;
}

std::string Resume::getAge() {
    return age;
}

void Resume::setAge(std::string age) {
    this->age = age;
}

std::string Resume::ToString() {
    return name + " " + sex + " " + age;
}

Resume *Resume::clone() {
    try {
        return static_cast<Resume *>(__super::clone());
    } catch (CloneNotSupportedException *e) {
        puts("Clone has error");
        e->printStackTrace();
    }

    return 0;
}
}