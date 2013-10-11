#include "JDBCTest.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example6
				{

					Connection *JDBCTest::getConnection() throw(Exception)
					{
						Class::forName("oracle.jdbc.driver.OracleDriver");
						return DriverManager::getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "test", "test");

					}

					void JDBCTest::create(UserModel *um)
					{
						Connection *conn = 0;
						try
						{
							conn = this->getConnection();
							std::string sql = "insert into tbl_user values(?,?,?)";
							PreparedStatement *pstmt = conn->prepareStatement(sql);
							pstmt->setString(1, um->getUuid());
							pstmt->setString(2, um->getName());
							pstmt->setInt(3, um->getAge());

							pstmt->executeUpdate();

							pstmt->close();
						}
						catch (Exception *err)
						{
							err->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								conn->close();
							}
							catch (SQLException *e)
							{
								e->printStackTrace();
							}
						}
					}

					Collection *JDBCTest::getByCondition(UserQueryModel *uqm)
					{
						Collection *col = std::vector();
						Connection *conn = 0;
						try
						{
							conn = this->getConnection();
							std::string sql = "select * from tbl_user where 1=1 ";
							sql = this->prepareSql(sql, uqm);
							PreparedStatement *pstmt = conn->prepareStatement(sql);
							this->setValue(pstmt, uqm);
							ResultSet *rs = pstmt->executeQuery();
							while(rs->next())
							{
								col->add(this->rs2Object(rs));
							}
						}
						catch(Exception *err)
						{
							err->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								conn->close();
							}
							catch (SQLException *e)
							{
								e->printStackTrace();
							}
						}
						return col;
					}

					std::string JDBCTest::prepareSql(std::string sql, UserQueryModel *uqm)
					{
						StringBuffer *buffer = new StringBuffer();
						buffer->append(sql);
						//绝对匹配
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(uqm->getUuid()!="" && uqm->getUuid().trim()->length()>0)
						{
							buffer->append(" and uuid=? ");
						}
						//模糊匹配
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(uqm->getName()!="" && uqm->getName().trim()->length()>0)
						{
							buffer->append(" and name like ? ");
						}
						//区间匹配
						if(uqm->getAge() > 0)
						{
							buffer->append(" and age >=? ");
						}
						if(uqm->getAge2() > 0)
						{
							buffer->append(" and age <=? ");
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
						return buffer->toString();
					}

					void JDBCTest::setValue(PreparedStatement *pstmt, UserQueryModel *uqm) throw(Exception)
					{
						int count = 1;
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(uqm->getUuid()!="" && uqm->getUuid().trim()->length()>0)
						{
							pstmt->setString(count, uqm->getUuid());
							count++;
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(uqm->getName()!="" && uqm->getName().trim()->length()>0)
						{
							pstmt->setString(count, "%"+uqm->getName()+"%");
							count++;
						}
						if(uqm->getAge() > 0)
						{
							pstmt->setInt(count, uqm->getAge());
							count++;
						}
						if(uqm->getAge2() > 0)
						{
							pstmt->setInt(count, uqm->getAge2());
							count++;
						}
					}

					UserModel *JDBCTest::rs2Object(ResultSet *rs) throw(Exception)
					{
						UserModel *um = new UserModel();
						std::string uuid = rs->getString("uuid");
						std::string name = rs->getString("name");
						int age = rs->getInt("age");

						um->setAge(age);
						um->setName(name);
						um->setUuid(uuid);

						return um;
					}

					void JDBCTest::main(std::string args[])
					{
						JDBCTest *uj = new JDBCTest();
						//先新增几条
						UserModel *um1 = new UserModel();
						um1->setUuid("u1");
						um1->setName("张三");
						um1->setAge(22);
						uj->create(um1);

						UserModel *um2 = new UserModel();
						um2->setUuid("u2");
						um2->setName("李四");
						um2->setAge(25);
						uj->create(um2);

						UserModel *um3 = new UserModel();
						um3->setUuid("u3");
						um3->setName("王五");
						um3->setAge(32);
						uj->create(um3);


						//测试查询
						UserQueryModel *uqm = new UserQueryModel();
						uqm->setAge(25);
						uqm->setAge2(36);
						Collection<UserModel*> *col = uj->getByCondition(uqm);
						for (Collection<UserModel*>::const_iterator tempUm = col->begin(); tempUm != col->end(); ++tempUm)
						{
							puts(*tempUm);
						}
					}
				}
			}
		}
	}
}