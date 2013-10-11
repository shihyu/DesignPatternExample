#include "Context.h"

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
					using javax::xml::parsers::DocumentBuilder;
					using javax::xml::parsers::DocumentBuilderFactory;
					using org::w3c::dom::Document;
					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;

					Context::Context(std::string filePathName) throw(Exception)
					{
						//通过辅助的Xml工具类来获取被解析的xml对应的Document对象
						InitializeInstanceFields();
						this->document = XmlUtil::getRoot(filePathName);
					}

					void Context::reInit()
					{
						preEles = std::vector<Element*>();
					}

					std::vector<Element*> Context::getNowEles(Element *pEle, std::string eleName)
					{
						std::vector<Element*> elements = std::vector<Element*>();
						NodeList *tempNodeList = pEle->getChildNodes();
						for(int i=0;i<tempNodeList->getLength();i++)
						{
							if(dynamic_cast<Element*>(tempNodeList->item(i)) != 0)
							{
								Element *nowEle = static_cast<Element*>(tempNodeList->item(i));
								if(nowEle->getTagName()->equals(eleName))
								{
									elements.push_back(nowEle);
								}
							}
						}
						return elements;
					}

					Document *Context::getDocument()
					{
						return document;
					}

					std::vector<Element*> Context::getPreEles()
					{
						return preEles;
					}

					void Context::setPreEles(std::vector<Element*> &nowEles)
					{
						this->preEles = nowEles;
					}
				}
			}
		}
	}
}
