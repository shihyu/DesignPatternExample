/* GOOD ：在不破壞封裝性的前提下，捕獲一個對象的內部狀態，並在該對象之外保存這個狀態，這樣就可以將以後的對象狀態恢復到先前保存的狀態。
 * 適用於功能比較複雜的，但需要記錄或維護屬性歷史的類；或者需要保存的屬性只是眾多屬性中的一小部分時Originator 可以根據保存的Memo 還原到前一狀態。
 **/

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
