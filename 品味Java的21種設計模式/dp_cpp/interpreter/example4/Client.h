#pragma once

#include "Context.h"
#include "ElementExpression.h"
#include "ElementsExpression.h"
#include "PropertysTerminalExpression.h"
#include <string>

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