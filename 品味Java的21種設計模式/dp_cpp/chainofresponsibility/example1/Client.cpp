#include "Client.h"
#include <iostream>
using namespace cn::javass::dp::chainofresponsibility::example1;


int main(std::string args[])
{
    FeeRequest *request = new FeeRequest();

    //开始测试
    std::string ret1 = request->requestToProjectManager("小李", 300);
    std::cout << "the ret1=" << ret1;
    std::string ret2 = request->requestToProjectManager("小张", 300);
    std::cout << "the ret2=" << ret2;

    std::string ret3 = request->requestToProjectManager("小李", 600);
    std::cout << "the ret3=" << ret3;
    std::string ret4 = request->requestToProjectManager("小张", 600);
    std::cout << "the ret4=" << ret4 ;

    std::string ret5 = request->requestToProjectManager("小李", 1200);
    std::cout << "the ret5=" << ret5;
    std::string ret6 = request->requestToProjectManager("小张", 1200);
    std::cout << "the ret6=" << ret6;
    return 0;
}
