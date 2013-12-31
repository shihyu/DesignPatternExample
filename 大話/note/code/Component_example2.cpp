#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Company {
protected:
    string m_strName;
public:
    Company(string strName) {
        m_strName = strName;
    }
    virtual void Add(Company* c) = 0;
    virtual void Display(int nDepth) = 0;
    virtual void LineOfDuty() = 0;
};

class ConcreteCompany: public Company {
private:
    vector<Company*> m_company;
public:
    ConcreteCompany(string strName): Company(strName) {}
    virtual void Add(Company* c) {
        m_company.push_back(c);
    }
    virtual void Display(int nDepth) {
        string strtemp;

        for (int i = 0; i < nDepth; i++) {
            strtemp += "-";
        }

        strtemp += m_strName;
        cout << strtemp << endl;
        vector<Company*>::iterator p = m_company.begin();

        while (p != m_company.end()) {
            (*p)->Display(nDepth + 2);
            p++;
        }
    }
    virtual void LineOfDuty() {
        vector<Company*>::iterator p = m_company.begin();

        while (p != m_company.end()) {
            (*p)->LineOfDuty();
            p++;
        }
    }
};

class HrDepartment : public Company {
public:
    HrDepartment(string strname) : Company(strname) {}
    virtual void Display(int nDepth) {
        string strtemp;

        for (int i = 0; i < nDepth; i++) {
            strtemp += "-";
        }

        strtemp += m_strName;
        cout << strtemp << endl;
    }
    virtual void Add(Company* c) {
        cout << "error" << endl;
    }
    virtual void LineOfDuty() {
        cout << m_strName << ":招聘人才" << endl;
    }
};

//用戶端:
int main() {
    ConcreteCompany* p = new ConcreteCompany("清華大學");
    p->Add(new HrDepartment("清華大學人才部"));
    ConcreteCompany* p1 = new ConcreteCompany("數學系");
    p1->Add(new HrDepartment("數學系人才部"));
    ConcreteCompany* p2 = new ConcreteCompany("物理系");
    p2->Add(new HrDepartment("物理系人才部"));
    p->Add(p1);
    p->Add(p2);
    p->Display(1);
    p->LineOfDuty();
    return 0;
}
