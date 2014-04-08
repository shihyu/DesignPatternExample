#include "Client.h"
using namespace cn::javass::dp::bridge::example1;

int main(std::string args[]) {
    Message *m = new CommonMessageSMS();
    m->send("aa", "au");

    m = new CommonMessageEmail();
    m->send("aa", "au");
    return 0;
}
