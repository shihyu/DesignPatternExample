#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example5
				{
					using javax::xml::parsers::DocumentBuilder;
					using javax::xml::parsers::DocumentBuilderFactory;
					using javax::xml::parsers::ParserConfigurationException;
					using org::w3c::dom::Document;
					using org::w3c::dom::Element;

					void Client::main(std::string args[]) throw(Exception)
					{
						//准备上下文
						Context *c = new Context("InterpreterTest.xml");
						//通过解析器获取抽象语法树
						ReadXmlExpression *re = Parser::parse("root/a/b/d$.id$");
						//请求解析，获取返回值
//ORIGINAL LINE: String ss[] = re.interpret(c);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss = re->interpret(c);
						for (std::string::const_iterator s = ss->begin(); s != ss->end(); ++s)
						{
							puts("d的属性id值是=" + *s);
						}

						//如果要使用同一个上下文，连续进行解析，需要重新初始化上下文对象
						c->reInit();
						ReadXmlExpression *re2 = Parser::parse("root/a/b/d$");
						//请求解析，获取返回值
//ORIGINAL LINE: String ss2[] = re2.interpret(c);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss2 = re2->interpret(c);
						for (std::string::const_iterator s = ss2->begin(); s != ss2->end(); ++s)
						{
							puts("d的值是=" + *s);
						}
					}
				}
			}
		}
	}
}