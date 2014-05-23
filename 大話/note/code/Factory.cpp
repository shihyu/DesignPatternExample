/* GOOD: 修正了簡單工廠模式中不遵守開放-封閉原則
 * 工廠方法把選擇判斷一到了用戶端去實現
 * 如果想新增新功能就不用修改原來的類, 直接修改用戶端即可
 */

#include <string>
#include <iostream>
using namespace std;

//實例基類,相當於 Product(為了方便,沒用抽象)
class LeiFeng {
public:
    virtual void Sweep() {
        cout << "雷鋒掃地" << endl;
    }

    virtual ~LeiFeng() {
    }
};

//學雷鋒的大學生,相當於 ConcreteProduct
class Student: public LeiFeng {
public:
    virtual void Sweep() {
        cout << "大學生掃地" << endl;
    }
};

//學雷鋒的志願者,相當於 ConcreteProduct
class Volenter: public LeiFeng {
public :
    virtual void Sweep() {
        cout << "志願者" << endl;
    }
};

//工廠基類 Creator
class LeiFengFactory {
public:
    virtual LeiFeng *CreateLeiFeng() {
        return new LeiFeng();
    }
    virtual ~LeiFengFactory() {
    }
};

//工廠具體類
class StudentFactory : public LeiFengFactory {
public :
    virtual LeiFeng *CreateLeiFeng() {
        return new Student();
    }
};

class VolenterFactory : public LeiFengFactory {
public:
    virtual LeiFeng *CreateLeiFeng() {
        return new Volenter();
    }
};

//用戶端
int main() {
    LeiFengFactory *sf = new LeiFengFactory();
    LeiFeng *s = sf->CreateLeiFeng();
    s->Sweep();
    delete s;
    delete sf;
    return 0;
}

