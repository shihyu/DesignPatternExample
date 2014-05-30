/*单件模式：确保一个类只有一个实例，并提供一个全局访问点*/

//截止日前(2011年2月25日), C++标准中没有多线程相关内容, 因此, 在此暂不考虑线程安全性
//经典的单件模式实现
#include <iostream>
using namespace std;

class Singleton
{
private:
        static Singleton* uniqueInstance;
        Singleton();         //默认构造器私有
        Singleton(const Singleton &);   //拷贝构造器私有
        Singleton& operator=(const Singleton &);   //赋值操作符私有
        ~Singleton();

public:
        static Singleton& getInstance();
        static void destroyInstance();    //相当丑陋的函数, 不过最简单的实现也就这样
};

Singleton* Singleton::uniqueInstance = NULL;  //静态变量初始化

Singleton& Singleton::getInstance()
{
        if (uniqueInstance == NULL)
        {
                uniqueInstance = new Singleton;
        }
        return *uniqueInstance;
}

void Singleton::destroyInstance()
{
        delete uniqueInstance;
        uniqueInstance = NULL;
}
