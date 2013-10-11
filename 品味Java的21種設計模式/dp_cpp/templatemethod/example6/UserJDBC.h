#pragma once

#include "JDBCTemplate.h"
#include "UserModel.h"
#include "UserQueryModel.h"
#include <string>

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

					///
					/// <summary> * 具体的实现用户管理的增删改查功能 </summary>
					/// 
					class UserJDBC : public JDBCTemplate
					{
					protected:
						virtual std::string getMainSql(int type);
						virtual void setUpdateSqlValue(int type, PreparedStatement *pstmt, object *obj) throw(Exception);
						virtual object *rs2Object(ResultSet *rs) throw(Exception);
						virtual std::string prepareQuerySql(std::string sql, object *qm);
						virtual void setQuerySqlValue(PreparedStatement *pstmt, object *qm) throw(Exception);
					private:
						void setCreateValue(PreparedStatement *pstmt, UserModel *um) throw(Exception);
						void setUpdateValue(PreparedStatement *pstmt, UserModel *um) throw(Exception);
						void setDeleteValue(PreparedStatement *pstmt, UserModel *um) throw(Exception);
					};

				}
			}
		}
	}
}