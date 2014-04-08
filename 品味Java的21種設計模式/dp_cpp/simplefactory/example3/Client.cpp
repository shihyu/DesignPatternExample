#include "Client.h"

using namespace cn::javass::dp::simplefactory::example3;

int main(std::string args[]) {
    //重要改变，没有new Impl()了，取而代之Factory.createApi()
    Api *api = Factory::createApi();
    api->test1("哈哈，不要紧张，只是个测试而已！");
    return 0;
}
