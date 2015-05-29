/**//********************************************************************
created:　　　 2006/06/30
filename:　　　　 Main.cpp
author:　　　　　　　 李创
http://www.cppblog.com/converse/
purpose:　　　 测试Factory模式的代码
*********************************************************************/

#include "Factory.h"
#include <stdlib.h>

int main(int argc, char* argv[])
{
    Creator* p = new ConcreateCreator();
    p->AnOperation();
    delete p;
    return 0;
}
