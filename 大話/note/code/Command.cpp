#include <iostream>
#include <string>
#include <vector>
using namespace std;

//烤肉師傅
class Barbucer {
public:
    void MakeMutton() {
        cout << "烤羊肉" << endl;
    }
    void MakeChickenWing() {
        cout << "烤雞翅膀" << endl;
    }
};

//抽象命令類
class Command {
protected:
    Barbucer *receiver;
public:
    Command(Barbucer *temp) {
        receiver = temp;
    }
    virtual void ExecuteCmd() = 0;
};

//烤羊肉命令
class BakeMuttonCmd : public Command {
public:
    BakeMuttonCmd(Barbucer *temp) : Command(temp) {}
    virtual void ExecuteCmd() {
        receiver->MakeMutton();
    }
};

//烤雞翅
class ChickenWingCmd : public Command {
public:
    ChickenWingCmd(Barbucer *temp) : Command(temp) {}
    virtual void ExecuteCmd() {
        receiver->MakeChickenWing();
    }
};

//服務員類
class Waiter {
protected:
    vector<Command *> m_commandList;
public:
    void SetCmd(Command *temp) {
        m_commandList.push_back(temp);
        cout << "增加定單" << endl;
    }
    //通知執行
    void Notify() {
        vector<Command *>::iterator p = m_commandList.begin();

        while (p != m_commandList.end()) {
            (*p)->ExecuteCmd();
            p++;
        }
    }
};

//用戶端
int main() {
    //店裡添加烤肉師傅、功能表、服務員等顧客
    Barbucer *barbucer = new Barbucer();
    Command *cmd = new BakeMuttonCmd(barbucer);
    Command *cmd2 = new ChickenWingCmd(barbucer);
    Waiter *girl = new Waiter();
    //點菜
    girl->SetCmd(cmd);
    girl->SetCmd(cmd2);
    //服務員通知
    girl->Notify();
    return 0;
}
