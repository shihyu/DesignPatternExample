#include "UserManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example3
				{

					Collection<UserModelApi*> *UserManager::getUserByDepId(std::string depId) throw(Exception)
					{
						Collection<UserModelApi*> *col = std::vector<UserModelApi*>();
						Connection *conn = 0;
						try
						{
							conn = this->getConnection();
							//只需要查询userId和name两个值就可以了
							std::string sql = "select u.userId,u.name " +"from tbl_user u,tbl_dep d " +"where u.depId=d.depId and d.depId like ?";

							PreparedStatement *pstmt = conn->prepareStatement(sql);
							pstmt->setString(1, depId+"%");

							ResultSet *rs = pstmt->executeQuery();
							while(rs->next())
							{
								//这里是创建的代理对象，而不是直接创建UserModel的对象
								Proxy *proxy = new Proxy(new UserModel());
								//只是设置userId和name两个值就可以了
								proxy->setUserId(rs->getString("userId"));
								proxy->setName(rs->getString("name"));

								col->add(proxy);
							}

							rs->close();
							pstmt->close();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							conn->close();
						}
						return col;
					}

					Connection *UserManager::getConnection() throw(Exception)
					{
						Class::forName("oracle.jdbc.driver.OracleDriver");
						return DriverManager::getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "test", "test");
					}
				}
			}
		}
	}
}
