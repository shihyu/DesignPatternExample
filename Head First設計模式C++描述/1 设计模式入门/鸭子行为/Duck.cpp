#include "Duck.h"

Duck::Duck(void)
{
}

void Duck::performFly()
{
	flyBehavior->fly();   //委托给行为类，下同
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::swim()
{
	cout << "All duck float, even decoys!" << endl;
}

Duck::~Duck(void)
{
}
