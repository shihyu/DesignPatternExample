#include "UserJDBC.h"

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

					std::string UserJDBC::getMainSql(int type)
					{
						//根据操作类型，返回相应的主干sql语句
						std::string sql = "";
						if(type == TYPE_CREATE)
						{
							sql = "insert into tbl_testuser values(?,?,?)";
						}
						else if(type == TYPE_DELETE)
						{
							sql = "delete from tbl_testuser where uuid=?";
						}
						else if(type == TYPE_UPDATE)
						{
							sql = "update tbl_testuser set name=?,age=? where uuid=?";
						}
						else if(type == TYPE_CONDITION)
						{
							sql = "select * from tbl_testuser where 1=1 ";
						}
						return sql;
					}

					void UserJDBC::setUpdateSqlValue(int type, PreparedStatement *pstmt, object *obj) throw(Exception)
					{
						//设置增、删、改操作的sql中"?"对应的值
						if(type == TYPE_CREATE)
						{
							this->setCreateValue(pstmt, static_cast<UserModel*>(obj));
						}
						else if(type == TYPE_DELETE)
						{
							this->setDeleteValue(pstmt, static_cast<UserModel*>(obj));
						}
						else if(type == TYPE_UPDATE)
						{
							this->setUpdateValue(pstmt, static_cast<UserModel*>(obj));
						}
					}

					object *UserJDBC::rs2Object(ResultSet *rs) throw(Exception)
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

					std::string UserJDBC::prepareQuerySql(std::string sql, object *qm)
					{
						UserQueryModel *uqm = static_cast<UserQueryModel*>(qm);
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

					void UserJDBC::setQuerySqlValue(PreparedStatement *pstmt, object *qm) throw(Exception)
					{
						UserQueryModel *uqm = static_cast<UserQueryModel*>(qm);
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

					void UserJDBC::setCreateValue(PreparedStatement *pstmt, UserModel *um) throw(Exception)
					{
						pstmt->setString(1, um->getUuid());
						pstmt->setString(2, um->getName());
						pstmt->setInt(3, um->getAge());
					}

					void UserJDBC::setUpdateValue(PreparedStatement *pstmt, UserModel *um) throw(Exception)
					{
						pstmt->setString(1, um->getName());
						pstmt->setInt(2, um->getAge());
						pstmt->setString(3, um->getUuid());
					}

					void UserJDBC::setDeleteValue(PreparedStatement *pstmt, UserModel *um) throw(Exception)
					{
						pstmt->setString(1, um->getUuid());
					}
				}
			}
		}
	}
}
