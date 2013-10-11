#pragma once

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

					using org::w3c::dom::Document;

					class XmlUtil
					{
					public:
						static Document *getRoot(std::string filePathName) throw(Exception);
					};

				}
			}
		}
	}
}