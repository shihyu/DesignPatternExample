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
				namespace example1
				{

					using javax::xml::parsers::DocumentBuilder;
					using javax::xml::parsers::DocumentBuilderFactory;

					using namespace org::w3c::dom;
					///
					/// <summary> * 读取配置文件 </summary>
					/// 
					class ReadAppXml
					{
					///	
					///	 <summary> * 读取配置文件内容 </summary>
					///	 * <param name="filePathName"> 配置文件的路径和文件名 </param>
					///	 * <exception cref="Exception"> </exception>
					///	 
					public:
						virtual void read(std::string filePathName) throw(Exception);

						static void main(std::string args[]) throw(Exception);
					};

				}
			}
		}
	}
}