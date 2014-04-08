#include <iostream>
using namespace std;

class Work;
class ForenoonState;
class NoonState;

class State {
public:
    virtual void WriteProgram(Work *w) = 0;
};

class Work {
private:
    State *current;
public:
    double hour;
public:
    Work();
    void SetState(State *temp) {
        current = temp;
    }
    void Writeprogram() {
        current->WriteProgram(this);
    }
};

class NoonState : public State {
public:
    virtual void WriteProgram(Work *w) {
        cout << "execute" << endl;

        if ((w->hour) < 13) {
            cout << "還不錯啦" << endl;
        } else {
            cout << "不行了,還是睡覺吧" << endl;
        }
    }
};

class ForenoonState : public State {
public:
    virtual void WriteProgram(Work *w) {
        if ((w->hour) < 12) {
            cout << "現在的精神無敵好" << endl;
        } else {
            w->SetState(new NoonState());
            w->Writeprogram(); //注意加上這句
        }
    }
};

Work::Work() {
    current = new ForenoonState();
}

// 用戶端:
int main() {
    Work *mywork = new Work();
    mywork->hour = 9;
    mywork->Writeprogram();
    mywork->hour = 14;
    mywork->Writeprogram();
    return 0;
}

