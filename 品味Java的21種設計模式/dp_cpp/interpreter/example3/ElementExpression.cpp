#include "ElementExpression.h"

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

					ElementExpression::ElementExpression(std::string eleName)
					{
						InitializeInstanceFields();
						this->eleName = eleName;
					}

					bool ElementExpression::addEle(ReadXmlExpression *ele)
					{
						this->eles->add(ele);
						return true;
					}

					bool ElementExpression::removeEle(ReadXmlExpression *ele)
					{
						this->eles->remove(ele);
						return true;
					}

					std::string *ElementExpression::interpret(Context *c)
					{
						//先取出上下文里的当前元素作为父级元素
						//查找到当前元素名称所对应的xml元素，并设置回到上下文中
						Element *pEle = c->getPreEle();
						if(pEle==0)
						{
							//说明现在获取的是根元素
							c->setPreEle(c->getDocument()->getDocumentElement());
						}
						else
						{
							//根据父级元素和要查找的元素的名称来获取当前的元素
							Element *nowEle = c->getNowEle(pEle, eleName);
							//把当前获取的元素放到上下文里面
							c->setPreEle(nowEle);
						}

						//循环调用子元素的interpret方法
//ORIGINAL LINE: String [] ss = nullptr;
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss = 0;
						for (Collection<ReadXmlExpression*>::const_iterator ele = eles->begin(); ele != eles->end(); ++ele)
						{
							ss = (*ele)->interpret(c);
						}
						return ss;
					}
				}
			}
		}
	}
}
