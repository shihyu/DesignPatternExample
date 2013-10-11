#include "AppConfig.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example4
				{

					AppConfig *AppConfig::getInstance()
					{
						return instance;
					}

					std::string AppConfig::getParameterA()
					{
						return parameterA;
					}

					std::string AppConfig::getParameterB()
					{
						return parameterB;
					}

					AppConfig::AppConfig()
					{
						//调用读取配置文件的方法
						readConfig();
					}

					void AppConfig::readConfig()
					{
						Properties *p = new Properties();
//JAVA TO C++ CONVERTER NOTE: The local variable in was renamed since it is a keyword in C++:
						InputStream *in_Renamed = AppConfig::typeid::getResourceAsStream("AppConfig.properties");
						try
						{
							p->load(in_Renamed);
							//把配置文件中的内容读出来设置到属性上
							this->parameterA = p->getProperty("paramA");
							this->parameterB = p->getProperty("paramB");
						}
						catch (IOException *e)
						{
							puts("装载配置文件出错了，具体堆栈信息如下：");
							e->printStackTrace();
						}
					}
				}
			}
		}
	}
}