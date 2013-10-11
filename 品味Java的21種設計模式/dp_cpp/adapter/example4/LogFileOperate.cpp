#include "LogFileOperate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example4
				{

					LogFileOperate::LogFileOperate(std::string logFilePathName)
					{
						//先判断是否传入了文件的路径和名称，如果是，
						//就重新设置操作的日志文件的路径和名称
						InitializeInstanceFields();
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(logFilePathName!="" && logFilePathName.trim()->length()>0)
						{
							this->logFilePathName = logFilePathName;
						}
					}

					std::vector<LogModel*> LogFileOperate::readLogFile()
					{
						std::vector<LogModel*> list = 0;
						ObjectInputStream *oin = 0;
						try
						{
							File *f = new File(logFilePathName);
							if(f->exists())
							{
								oin = new ObjectInputStream(new BufferedInputStream(new FileInputStream(f)));
								list = static_cast<std::vector<LogModel*>*>(oin->readObject());
							}
						}
						catch (Exception *e)
						{
							e->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								if(oin!=0)
								{
									oin->close();
								}
							}
							catch (IOException *e)
							{
								e->printStackTrace();
							}
						}
						return list;
					}

					void LogFileOperate::writeLogFile(std::vector<LogModel*> &list)
					{
						File *f = new File(logFilePathName);
						ObjectOutputStream *oout = 0;
						try
						{
							oout = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream(f)));
							oout->writeObject(list);
						}
						catch (IOException *e)
						{
							e->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								oout->close();
							}
							catch (IOException *e)
							{
								e->printStackTrace();
							}
						}
					}
				}
			}
		}
	}
}
