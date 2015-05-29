/**//********************************************************************
　　　 created:　　　 2006/06/30
　　　 filename:　　　　 Factory.cpp
　　　 author:　　　　　　　 李创
　　　　　　　　　　　　　　　 http://www.cppblog.com/converse/

　　　 purpose:　　　 Factory模式的演示代码
*********************************************************************/
#include "Factory.h"
#include <iostream>

using namespace std;

ConcreateProduct::ConcreateProduct()
{
    std::cout << "construction of ConcreateProductn";
}

ConcreateProduct::~ConcreateProduct()
{
    std::cout << "destruction of ConcreateProductn";
}

void Creator::AnOperation()
{
    Product* p = FactoryMethod();

    std::cout << "an operation of productn";
}

ConcreateCreator::ConcreateCreator()
{
    std::cout << "construction of ConcreateCreatorn";
}

ConcreateCreator::~ConcreateCreator()
{
    std::cout << "destruction of ConcreateCreatorn";
}

Product* ConcreateCreator::FactoryMethod()
{
    return new ConcreateProduct();
}
