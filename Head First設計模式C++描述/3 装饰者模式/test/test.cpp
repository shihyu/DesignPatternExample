#include <iostream>

using namespace std;

struct A {
    int x;
};

struct B {
    A a;
};
struct C: public B {
    void test() {
        a.x = 10;
    }

};

int main() {
    C c;
    c.test();
    return 0;
}