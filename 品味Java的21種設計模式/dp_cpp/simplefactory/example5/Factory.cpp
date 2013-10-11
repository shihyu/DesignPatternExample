#include "Factory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example5
				{

					Api *Factory::createApi()
					{
						//直接读取配置文件来获取需要创建实例的类

						//至于如何读取Properties还有如何反射这里就不解释了
						Properties *p = new Properties();
//JAVA TO C++ CONVERTER NOTE: The local variable in was renamed since it is a keyword in C++:
						InputStream *in_Renamed = 0;
						try
						{
							in_Renamed = Factory::typeid::getResourceAsStream("FactoryTest.properties");
							p->load(in_Renamed);
						}
						catch (IOException *e)
						{
							puts("装载工厂配置文件出错了，具体的堆栈信息如下：");
							e->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								in_Renamed->close();
							}
							catch (IOException *e)
							{
								e->printStackTrace();
							}
						}
						//用反射去创建，那些例外处理等完善的工作这里就不做了
						Api *api = 0;
						try
						{
							api = static_cast<Api*>(Class::forName(p->getProperty("ImplClass"))->newInstance());
						}
						catch (InstantiationException *e)
						{
							e->printStackTrace();
						}
						catch (IllegalAccessException *e)
						{
							e->printStackTrace();
						}
						catch (ClassNotFoundException *e)
						{
							e->printStackTrace();
						}
						return api;
					}
				}
			}
		}
	}
}
