#include <iostream>
#include <string>
using namespace std;

class Player {
protected:
    string name;
public:
    Player(string strName) {
        name = strName;
    }
    virtual void Attack() = 0;
    virtual void Defense() = 0;
};

class Forwards : public Player {
public:
    Forwards(string strName): Player(strName) {}
public:
    virtual void Attack() {
        cout << name << "前鋒進攻" << endl;
    }
    virtual void Defense() {
        cout << name << "前鋒防守" << endl;
    }
};

class Center : public Player {
public:
    Center(string strName): Player(strName) {}
public:
    virtual void Attack() {
        cout << name << "中場進攻" << endl;
    }
    virtual void Defense() {
        cout << name << "中場防守" << endl;
    }
};

//為中場翻譯
class TransLater: public Player {
private:
    Center *player;
public:
    TransLater(string strName): Player(strName) {
        player = new Center(strName);
    }
    virtual void Attack() {
        player->Attack();
    }
    virtual void Defense() {
        player->Defense();
    }
};

// 用戶端
int main() {
    Player *p = new TransLater("小李");
    p->Attack();
    return 0;
}

