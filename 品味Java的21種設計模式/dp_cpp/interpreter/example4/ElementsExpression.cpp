#include "ElementsExpression.h"

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
					using org::w3c::dom::NodeList;

					ElementsExpression::ElementsExpression(std::string eleName)
					{
						InitializeInstanceFields();
						this->eleName = eleName;
					}

					std::string *ElementsExpression::interpret(Context *c)
					{
						//先取出上下文里的父级元素
						std::vector<Element*> pEles = c->getPreEles();
						//把当前获取的元素放到上下文里面，这次是获取多个元素
						std::vector<Element*> nowEles = std::vector<Element*>();

						for (std::vector<Element*>::const_iterator ele = pEles.begin(); ele != pEles.end(); ++ele)
						{
							nowEles.addAll(c->getNowEles(*ele, eleName));
						}
						c->setPreEles(nowEles);

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

					bool ElementsExpression::addEle(ReadXmlExpression *ele)
					{
						this->eles->add(ele);
						return true;
					}

					bool ElementsExpression::removeEle(ReadXmlExpression *ele)
					{
						this->eles->remove(ele);
						return true;
					}
				}
			}
		}
	}
}
