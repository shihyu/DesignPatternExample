#pragma once

#include <string>
#include <vector>

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
					/// <summary> * 一个简单的实现JDBC增删改查功能的模板 </summary>
					/// 
					class JDBCTemplate
					{
					///	
					///	 <summary> * 定义当前的操作类型是新增 </summary>
					///	 
					protected:
						static const int TYPE_CREATE = 1;
					///	
					///	 <summary> * 定义当前的操作类型是修改 </summary>
					///	 
						static const int TYPE_UPDATE = 2;
					///	
					///	 <summary> * 定义当前的操作类型是删除 </summary>
					///	 
						static const int TYPE_DELETE = 3;
					///	
					///	 <summary> * 定义当前的操作类型是按条件查询 </summary>
					///	 
						static const int TYPE_CONDITION = 4;

					/*---------------------模板方法---------------------*/	
					///	
					///	 <summary> * 实现新增的功能 </summary>
					///	 * <param name="obj"> 需要被新增的数据对象 </param>
					///	 
					public:
						void create(object *obj);
					///	
					///	 <summary> * 实现修改的功能 </summary>
					///	 * <param name="obj"> 需要被修改的数据对象 </param>
					///	 
						void update(object *obj);
					///	
					///	 <summary> * 实现删除的功能 </summary>
					///	 * <param name="obj"> 需要被删除的数据对象 </param>
					///	 
						void delete(object *obj);
					///	
					///	 <summary> * 实现按照条件查询的功能 </summary>
					///	 * <param name="qm"> 封装查询条件的数据对象 </param>
					///	 * <returns> 符合条件的数据对象集合 </returns>
					///	 
						Collection *getByCondition(object *qm);


					/*---------------------原语操作---------------------*/		
					///	
					///	 <summary> * 获取操作需要的主干sql </summary>
					///	 * <param name="type"> 操作类型 </param>
					///	 * <returns> 操作对应的主干sql </returns>
					///	 
					protected:
						virtual std::string getMainSql(int type) = 0;
					///	
					///	 <summary> * 为更新操作的sql中的"?"设置值 </summary>
					///	 * <param name="type"> 操作类型 </param>
					///	 * <param name="pstmt"> PreparedStatement对象 </param>
					///	 * <param name="obj"> 操作的数据对象 </param>
					///	 * <exception cref="Exception"> </exception>
					///	 
						virtual void setUpdateSqlValue(int type, PreparedStatement *pstmt, object *obj) = 0 throw(Exception);

					///	
					///	 <summary> * 为通用查询动态的拼接sql的条件部分，基本思路是：
					///	 * 只有用户填写了相应的条件，那么才在sql中添加对应的条件 </summary>
					///	 * <param name="sql"> sql的主干部分 </param>
					///	 * <param name="qm"> 封装查询条件的数据模型 </param>
					///	 * <returns> 拼接好的sql语句 </returns>
					///	 
						virtual std::string prepareQuerySql(std::string sql, object *qm) = 0;
					///	
					///	 <summary> * 为通用查询的sql动态设置条件的值 </summary>
					///	 * <param name="pstmt"> 预处理查询sql的对象 </param>
					///	 * <param name="qm"> 封装查询条件的数据模型 </param>
					///	 * <exception cref="Exception"> </exception>
					///	 
						virtual void setQuerySqlValue(PreparedStatement *pstmt, object *qm) = 0 throw(Exception);
					///	
					///	 <summary> * 把查询返回的结果集转换成为数据对象 </summary>
					///	 * <param name="rs"> 查询返回的结果集 </param>
					///	 * <returns> 查询返回的结果集转换成为数据对象 </returns>
					///	 * <exception cref="Exception"> </exception>
					///	 
						virtual object *rs2Object(ResultSet *rs) = 0 throw(Exception);

					/*---------------------钩子操作---------------------*/		
					///	
					///	 <summary> * 连接数据库的默认实现，可以被子类覆盖 </summary>
					///	 * <returns> 数据库连接 </returns>
					///	 * <exception cref="Exception"> </exception>
					///	 
						virtual Connection *getConnection() throw(Exception);
					///	
					///	 <summary> * 执行查询 </summary>
					///	 * <param name="sql"> 查询的主干sql语句 </param>
					///	 * <param name="qm"> 封装查询条件的数据模型 </param>
					///	 * <returns> 查询后的结果对象集合 </returns>
					///	 
						virtual Collection *getByCondition(std::string sql, object *qm);
					///	
					///	 <summary> * 执行更改数据的sql语句，包括增删改的功能 </summary>
					///	 * <param name="sql"> 需要执行的sql语句 </param>
					///	 * <param name="callback"> 回调接口，回调为sql语句赋值的方法 </param>
					///	 
						virtual void executeUpdate(std::string sql, int type, object *obj);
					};

				}
			}
		}
	}
}