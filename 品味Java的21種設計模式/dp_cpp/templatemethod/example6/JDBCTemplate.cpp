#include "JDBCTemplate.h"

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example6 {

void JDBCTemplate::create(object *obj) {
    //1：获取新增的sql
    std::string sql = this->getMainSql(TYPE_CREATE);
    //2：调用通用的更新实现
    this->executeUpdate(sql, TYPE_CREATE, obj);
}

void JDBCTemplate::update(object *obj) {
    //1：获取修改的sql
    std::string sql = this->getMainSql(TYPE_UPDATE);
    //2：调用通用的更新实现
    this->executeUpdate(sql, TYPE_UPDATE, obj);
}

void JDBCTemplate::delete(object *obj) {
    //1：获取删除的sql
    std::string sql = this->getMainSql(TYPE_DELETE);
    //2：调用通用的更新实现
    this->executeUpdate(sql, TYPE_DELETE, obj);
}

Collection *JDBCTemplate::getByCondition(object *qm) {
    //1：获取查询的sql
    std::string sql = this->getMainSql(TYPE_CONDITION);
    //2：调用通用的查询实现
    return this->getByCondition(sql, qm);
}

Connection *JDBCTemplate::getConnection() throw(Exception) {
    Class::forName("oracle.jdbc.driver.OracleDriver");
    return DriverManager::getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "test", "test");
}

Collection *JDBCTemplate::getByCondition(std::string sql, object *qm) {
    Collection *col = std::vector();
    Connection *conn = 0;

    try {
        //调用钩子方法
        conn = this->getConnection();
        //调用原语操作
        sql = this->prepareQuerySql(sql, qm);
        PreparedStatement *pstmt = conn->prepareStatement(sql);
        //调用原语操作
        this->setQuerySqlValue(pstmt, qm);
        ResultSet *rs = pstmt->executeQuery();

        while (rs->next()) {
            //调用原语操作
            col->add(this->rs2Object(rs));
        }

        rs->close();
        pstmt->close();
    } catch (Exception *err) {
        err->printStackTrace();
    }

    //JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
    finally {
        try
        {
            conn->close();
        } catch (SQLException *e) {
            e->printStackTrace();
        }
    }
    return col;
}

void JDBCTemplate::executeUpdate(std::string sql, int type, object *obj) {
    Connection *conn = 0;

    try {
        //调用钩子方法
        conn = this->getConnection();
        PreparedStatement *pstmt = conn->prepareStatement(sql);
        //调用原语操作
        this->setUpdateSqlValue(type, pstmt, obj);
        pstmt->executeUpdate();
        pstmt->close();
    } catch (Exception *err) {
        err->printStackTrace();
    }

    //JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
    finally {
        try
        {
            conn->close();
        } catch (SQLException *e) {
            e->printStackTrace();
        }
    }
}
}
}
}
}
}
