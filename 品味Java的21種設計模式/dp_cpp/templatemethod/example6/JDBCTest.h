#pragma once

#include "UserModel.h"
#include "UserQueryModel.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example6 {


class JDBCTest {
private:
    Connection *getConnection() throw(Exception);

public:
    virtual void create(UserModel *um);
    virtual Collection *getByCondition(UserQueryModel *uqm);
    ///
    ///  <summary> * 为通用查询动态的拼接sql的条件部分，基本思路是：
    ///  * 如果用户填写了相应的条件，那么才在sql中添加对应的条件 </summary>
    ///  * <param name="sql"> sql的主干部分 </param>
    ///  * <param name="uqm"> 封装查询条件的数据模型 </param>
    ///  * <returns> 拼接好的sql语句 </returns>
    ///
private:
    std::string prepareSql(std::string sql, UserQueryModel *uqm);
    ///
    ///  <summary> * 为通用查询的sql动态设置条件的值 </summary>
    ///  * <param name="pstmt"> 预处理查询sql的对象 </param>
    ///  * <param name="uqm"> 封装查询条件的数据模型 </param>
    ///  * <exception cref="Exception"> </exception>
    ///
    void setValue(PreparedStatement *pstmt, UserQueryModel *uqm) throw(Exception);
    ///
    ///  <summary> * 把查询返回的结果集转换成为对象 </summary>
    ///  * <param name="rs"> 查询返回的结果集 </param>
    ///  * <returns> 查询返回的结果集转换成为对象 </returns>
    ///  * <exception cref="Exception"> </exception>
    ///
    UserModel *rs2Object(ResultSet *rs) throw(Exception);

    static void main(std::string args[]);
};

}
}
}
}
}