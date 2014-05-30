// Product.h: interface for the Product class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PRODUCT_H__099C2D20_33FF_4BF6_9560_451952300957__INCLUDED_)
#define AFX_PRODUCT_H__099C2D20_33FF_4BF6_9560_451952300957__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "string"
#include <iostream>
using namespace std;


class Product
{
private:
	string part1,part2,part3;
public:
	Product();
	~Product();
	void setPart1(string pt1){part1=pt1;}
	void setPart2(string pt2){part1=pt2;}
	void setPart3(string pt3){part1=pt3;}
	void ProducePart();
	void fun();
protected:
};

#endif // !defined(AFX_PRODUCT_H__099C2D20_33FF_4BF6_9560_451952300957__INCLUDED_)
