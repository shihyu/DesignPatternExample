#include "ElementTerminalExpression.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example3
				{
					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;

					ElementTerminalExpression::ElementTerminalExpression(std::string name)
					{
						InitializeInstanceFields();
						this->eleName = name;
					}

					std::string *ElementTerminalExpression::interpret(Context *c)
					{
						//先取出上下文里的当前元素作为父级元素
						Element *pEle = c->getPreEle();
						//查找到当前元素名称所对应的xml元素
						Element *ele = 0;
						if(pEle==0)
						{
							//说明现在获取的是根元素
							ele = c->getDocument()->getDocumentElement();
							c->setPreEle(ele);
						}
						else
						{
							//根据父级元素和要查找的元素的名称来获取当前的元素
							ele = c->getNowEle(pEle, eleName);
							//把当前获取的元素放到上下文里面
							c->setPreEle(ele);
						}

						//然后需要去获取这个元素的值
						std::string ss[1];
						ss[0] = ele->getFirstChild()->getNodeValue();
						return ss;
					}
				}
			}
		}
	}
}
