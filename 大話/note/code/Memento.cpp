#include <iostream>
#include <string>
using namespace std;

class Memo;
//發起人類
class Originator {
public:
    string state;
    Memo *CreateMemo();
    void SetMemo(Memo *memo);
    void Show() {
        cout << "狀態:" << state << endl;
    }
};

//備忘錄類
class Memo {
public:
    string state;
    Memo(string strState) {
        state = strState;
    }
};

Memo *Originator::CreateMemo() {
    return new Memo(state);
}

void Originator::SetMemo(Memo *memo) {
    state = memo->state;
}

//管理者類
class Caretaker {
public:
    Memo *memo;
};

// 用戶端:
int main() {
    Originator *on = new Originator();
    on->state = "on";
    on->Show();
    Caretaker *c = new Caretaker();
    c->memo = on->CreateMemo();
    on->state = "off";
    on->Show();
    on->SetMemo(c->memo);
    on->Show();
    return 0;
}
