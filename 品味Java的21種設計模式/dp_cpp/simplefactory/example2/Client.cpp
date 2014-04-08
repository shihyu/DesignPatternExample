#include "Client.h"

using namespace cn::javass::dp::simplefactory::example2;

int main(std::string args[]) {
    //通过简单工厂来获取接口对象
    Api *api = Factory::createApi(1);
    api->operation("正在使用简单工厂");
    return 0;
}
