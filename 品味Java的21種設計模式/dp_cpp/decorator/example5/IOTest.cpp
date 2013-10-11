#include "IOTest.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example5
				{

					void IOTest::main(std::string args[]) throw(Exception)
					{
						//流式读取文件
						DataInputStream *din = 0;
						try
						{
							din = new DataInputStream(new BufferedInputStream(new FileInputStream("IOTest.txt")));
							//然后就可以获取文件内容了
							char bs[din->available()];
							din->read(bs);
							std::string content = std::string(bs);
							puts("文件内容===="+content);
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							din->close();
						}
					}
				}
			}
		}
	}
}