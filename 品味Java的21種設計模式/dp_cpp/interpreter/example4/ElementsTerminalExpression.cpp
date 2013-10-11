#include "ElementsTerminalExpression.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example4
				{
					using org::w3c::dom::Element;

					ElementsTerminalExpression::ElementsTerminalExpression(std::string name)
					{
						InitializeInstanceFields();
						this->eleName = name;
					}

					std::string *ElementsTerminalExpression::interpret(Context *c)
					{
						//先取出上下文里的父级元素
						std::vector<Element*> pEles = c->getPreEles();
						//获取当前的多个元素
						std::vector<Element*> nowEles = std::vector<Element*>();

						for (std::vector<Element*>::const_iterator ele = pEles.begin(); ele != pEles.end(); ++ele)
						{
							nowEles.addAll(c->getNowEles(*ele, eleName));
						}

						//然后需要去获取这些元素的值
						std::string ss[nowEles.size()];
						for(int i=0;i<sizeof(ss) / sizeof(ss[0]);i++)
						{
							ss[i] = nowEles.at(i)->getFirstChild()->getNodeValue();
						}
						return ss;
					}
				}
			}
		}
	}
}
