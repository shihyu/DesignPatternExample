/* 為子系統的一組介面提供一個一致。使用戶起來更加方便 */

#include<iostream>
#include <string>
using namespace std;

class SubSysOne {
public:
    void MethodOne() {
        cout << "方法一" << endl;
    }
};

class SubSysTwo {
public:
    void MethodTwo() {
        cout << "方法二" << endl;
    }
};

class SubSysThree {
public:
    void MethodThree() {
        cout << "方法三" << endl;
    }
};

//外觀類
class Facade {
private:
    SubSysOne *sub1;
    SubSysTwo *sub2;
    SubSysThree *sub3;
public:
    Facade() {
        sub1 = new SubSysOne();
        sub2 = new SubSysTwo();
        sub3 = new SubSysThree();
    }
    ~Facade() {
        delete sub1;
        delete sub2;
        delete sub3;
    }
    void FacadeMethod() {
        sub1->MethodOne();
        sub2->MethodTwo();
        sub3->MethodThree();
    }
};

//用戶端
int main() {
    Facade *test = new Facade();
    test->FacadeMethod();
    return 0;
}

