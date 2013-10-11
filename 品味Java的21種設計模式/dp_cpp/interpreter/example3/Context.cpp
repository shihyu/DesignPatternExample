#include "Context.h"

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
					using org::w3c::dom::Document;
					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;

					Context::Context(std::string filePathName) throw(Exception)
					{
						//通过辅助的Xml工具类来获取被解析的xml对应的Document对象
						this->document = XmlUtil::getRoot(filePathName);
					}

					void Context::reInit()
					{
//JAVA TO C++ CONVERTER WARNING: Java to C++ Converter converted the original 'null' assignment to a call to 'delete', but you should review memory allocation of all pointer variables in the converted code:
						delete preEle;
					}

					Element *Context::getNowEle(Element *pEle, std::string eleName)
					{
						NodeList *tempNodeList = pEle->getChildNodes();
						for(int i=0;i<tempNodeList->getLength();i++)
						{
							if(dynamic_cast<Element*>(tempNodeList->item(i)) != 0)
							{
								Element *nowEle = static_cast<Element*>(tempNodeList->item(i));
								if(nowEle->getTagName()->equals(eleName))
								{
									return nowEle;
								}
							}
						}
						return 0;
					}

					Element *Context::getPreEle()
					{
						return preEle;
					}

					void Context::setPreEle(Element *preEle)
					{
						this->preEle = preEle;
					}

					Document *Context::getDocument()
					{
						return document;
					}
				}
			}
		}
	}
}