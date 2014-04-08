#include "AdapterMain.h"
using namespace adapter;

int main() {
    Player *guard = new Guard("Alston");
    guard->attrack();
    guard->defence();
    Player *center = new Translator("YM");
    center->attrack();
    center->defence();
    return 0;
}
