#include <string>
#include <iostream>
#include <vector>

class Company {
private:
    std::string name;

public:
    Company(std::string name);

    virtual std::string getName();

    virtual void setName(std::string name);

    virtual void add(Company *c) = 0;

    virtual void remove(Company *c) = 0;

    virtual void display(int depth) = 0;

    virtual void lineOfDuty() = 0;
};

class ConcreteCompany : public Company {
private:
    std::vector<Company *> children;

public:
    ConcreteCompany(std::string name);

    virtual void add(Company *c);

    virtual void display(int depth);

    virtual void lineOfDuty();

    virtual void remove(Company *c);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            children = std::vector<Company *>();
            initialized = true;
        }
    }
};

class FinanceDepartment : public Company {
public:
    FinanceDepartment(std::string name);

    virtual void add(Company *c);

    virtual void display(int depth);

    virtual void lineOfDuty();

    virtual void remove(Company *c);

};

class HRDepartment : public Company {

public:
    HRDepartment(std::string name);

    virtual void add(Company *c);

    virtual void display(int depth);

    virtual void lineOfDuty();

    virtual void remove(Company *c);

};

HRDepartment::HRDepartment(std::string name) : Company(name) {
}

void HRDepartment::add(Company *c) {
}

void HRDepartment::display(int depth) {
    std::cout << "-" <<  this->getName() << std::endl;
}

void HRDepartment::lineOfDuty() {
    std::cout << this->getName() <<  " recruitment and training!" << std::endl;
}

void HRDepartment::remove(Company *c) {
}

FinanceDepartment::FinanceDepartment(std::string name) : Company(name) {
}

void FinanceDepartment::add(Company *c) {
}

void FinanceDepartment::display(int depth) {
    std::cout << "-" << this->getName() << std::endl;
}

void FinanceDepartment::lineOfDuty() {
    std::cout << this->getName() << "All the things about Finance!" << std::endl;
}

void FinanceDepartment::remove(Company *c) {
}

ConcreteCompany::ConcreteCompany(std::string name) : Company(name) {
    InitializeInstanceFields();
}

void ConcreteCompany::add(Company *c) {
    children.push_back(c);
}

void ConcreteCompany::display(int depth) {
    std::cout << "-" << this->getName() << std::endl;

    for (std::vector<Company *>::const_iterator c = children.begin(); c != children.end(); ++c) {
        for (int i = 0; i < depth; i++) {
            std::cout << "--";
        }

        (*c)->display(depth + 2);
    }
}

void ConcreteCompany::lineOfDuty() {
    for (std::vector<Company *>::const_iterator c = children.begin(); c != children.end(); ++c) {
        (*c)->lineOfDuty();
    }
}

void ConcreteCompany::remove(Company *c) {
    // children.remove(c);
    for (std::vector<Company *>::iterator it = children.begin(); it != children.end();) {
        if (*it == c) {
            it = children.erase(it);
        } else {
            ++it;
        }
    }
}

Company::Company(std::string name) {
    this->name = name;
}

std::string Company::getName() {
    return name;
}

void Company::setName(std::string name) {
    this->name = name;
}

int main() {
    ConcreteCompany *root = new ConcreteCompany("The Head Office Of Our Company In Beijing");
    root->add(new HRDepartment("Head Office HR"));
    root->add(new FinanceDepartment("Head Office Finance"));
    ConcreteCompany *comp = new ConcreteCompany("The leaf company in shanghai");
    comp->add(new HRDepartment("shanghai office HR"));
    comp->add(new FinanceDepartment("shanghai office finance"));
    root->add(comp);
    ConcreteCompany *comp1 = new ConcreteCompany("the office of shanghai company in nanjing");
    comp1->add(new HRDepartment("nanjing office HR"));
    comp1->add(new FinanceDepartment("nanjing office finance"));
    comp->add(comp1);
    ConcreteCompany *comp2 = new ConcreteCompany("the office of shanghai company in hangzhou");
    comp2->add(new HRDepartment("hangzhou office HR"));
    comp2->add(new FinanceDepartment("hangzhou office finance"));
    comp->add(comp2);
    std::cout << "the structure of our company:" << std::endl;
    root->display(1);
    std::cout << "the duty of every department:" << std::endl;
    root->lineOfDuty();
    return 0;
}
