#pragma once

#include "Context.h"
#include "ReadXmlExpression.h"
#include "Parser.h"
#include <string>

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

					class Client
					{
						static void main(std::string args[]) throw(Exception);
					};
				}
			}
		}
	}
}