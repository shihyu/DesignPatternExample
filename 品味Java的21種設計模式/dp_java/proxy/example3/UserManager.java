package cn.javass.dp.proxy.example3;
import java.util.*;
import java.sql.*;

/**
 * 实现示例要求的功能
 */
public class UserManager {
    /**
     * 根据部门编号来获取该部门下的所有人员
     * @param depId 部门编号
     * @return 该部门下的所有人员
     */
    public Collection<UserModelApi> getUserByDepId(String depId)throws Exception {
        Collection<UserModelApi> col = new ArrayList<UserModelApi>();
        Connection conn = null;

        try{
            conn = this.getConnection();
            //只需要查询userId和name两个值就可以了
            String sql = "select u.userId,u.name "
            + "from tbl_user u,tbl_dep d "
            + "where u.depId=d.depId and d.depId like ?";

            PreparedStatement pstmt = conn.prepareStatement(sql);
            pstmt.setString(1, depId + "%");

            ResultSet rs = pstmt.executeQuery();

            while (rs.next()) {
                //这里是创建的代理对象，而不是直接创建UserModel的对象
                Proxy proxy = new Proxy(new UserModel());
                //只是设置userId和name两个值就可以了
                proxy.setUserId(rs.getString("userId"));
                proxy.setName(rs.getString("name"));

                col.add(proxy);
            }

            rs.close();
            pstmt.close();
        } finally{
            conn.close();
        }
        return col;
    }
    /**
     * 获取与数据库的连接
     * @return 数据库连接
     */
    private Connection getConnection() throws Exception {
        Class.forName("oracle.jdbc.driver.OracleDriver");
        return DriverManager.getConnection(
            "jdbc:oracle:thin:@localhost:1521:orcl", "test", "test");
    }
}
