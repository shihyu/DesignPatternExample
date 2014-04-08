#include "UserManager.h"

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example1 {

Collection<UserModel *> *UserManager::getUserByDepId(std::string depId) throw(Exception) {
    Collection<UserModel *> *col = std::vector<UserModel *>();
    Connection *conn = 0;

    try {
        conn = this->getConnection();
        std::string sql = "select * from tbl_user u,tbl_dep d " + "where u.depId=d.depId and d.depId like ?";

        PreparedStatement *pstmt = conn->prepareStatement(sql);
        pstmt->setString(1, depId + "%");

        ResultSet *rs = pstmt->executeQuery();

        while (rs->next()) {
            UserModel *um = new UserModel();
            um->setUserId(rs->getString("userId"));
            um->setName(rs->getString("name"));
            um->setDepId(rs->getString("depId"));
            um->setSex(rs->getString("sex"));

            col->add(um);
        }

        rs->close();
        pstmt->close();
    }

    //JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
    finally {
        conn->close();
    }
    return col;
}

Connection *UserManager::getConnection() throw(Exception) {
    Class::forName("oracle.jdbc.driver.OracleDriver");
    return DriverManager::getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "test", "test");
}
}
}
}
}
}
