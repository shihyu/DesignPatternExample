#include "CompositeMain.h"
#include <iostream>
using namespace composite;


int main() {
    ConcreteCompany* root = new ConcreteCompany("The Head Office Of Our Company In Beijing");
    root->add(new HRDepartment("Head Office HR"));
    root->add(new FinanceDepartment("Head Office Finance"));
    ConcreteCompany* comp = new ConcreteCompany("The leaf company in shanghai");
    comp->add(new HRDepartment("shanghai office HR"));
    comp->add(new FinanceDepartment("shanghai office finance"));
    root->add(comp);
    ConcreteCompany* comp1 = new ConcreteCompany("the office of shanghai company in nanjing");
    comp1->add(new HRDepartment("nanjing office HR"));
    comp1->add(new FinanceDepartment("nanjing office finance"));
    comp->add(comp1);
    ConcreteCompany* comp2 = new ConcreteCompany("the office of shanghai company in hangzhou");
    comp2->add(new HRDepartment("hangzhou office HR"));
    comp2->add(new FinanceDepartment("hangzhou office finance"));
    comp->add(comp2);
    std::cout << "the structure of our company:" << std::endl;
    root->display(1);
    std::cout << "the duty of every department:" << std::endl;
    root->lineOfDuty();
    return 0;
}
