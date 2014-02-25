#include <string>

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

    virtual Resume* clone();
};

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

Resume* Resume::clone() {
    try {
        return static_cast<Resume*>(__super::clone());
    } catch (CloneNotSupportedException* e) {
        puts("Clone has error");
        e->printStackTrace();
    }

    return 0;
}

int main() {
    Resume* linResume = new Resume("Lincoln");
    linResume->setAge("23");
    linResume->setSex("M");
    puts(linResume->toString());
    Resume* linResume2 = linResume->clone();
    linResume2->setAge("22");
    puts(linResume2->toString());
    return 0;
}
