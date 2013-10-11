package cn.javass.dp.templatemethod.example6;

import java.sql.*;
import java.util.ArrayList;
import java.util.Collection;

public class JDBCTest {
	private Connection getConnection() throws Exception {
		Class.forName("oracle.jdbc.driver.OracleDriver");
		return DriverManager.getConnection(
				"jdbc:oracle:thin:@localhost:1521:orcl", "test", "test");
		
	}

	public void create(UserModel um) {
		Connection conn = null;
		try {
			conn = this.getConnection();
			String sql = "insert into tbl_user values(?,?,?)";
			PreparedStatement pstmt = conn.prepareStatement(sql);
			pstmt.setString(1, um.getUuid());
			pstmt.setString(2, um.getName());
			pstmt.setInt(3, um.getAge());

			pstmt.executeUpdate();

			pstmt.close();
		} catch (Exception err) {
			err.printStackTrace();
		} finally {
			try {
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
	}
	public Collection getByCondition(UserQueryModel uqm){
		Collection col = new ArrayList();
		Connection conn = null;
		try{
			conn = this.getConnection();
			String sql = "select * from tbl_user where 1=1 ";
			sql = this.prepareSql(sql, uqm);
			PreparedStatement pstmt = conn.prepareStatement(sql);
			this.setValue(pstmt, uqm);
			ResultSet rs = pstmt.executeQuery();
			while(rs.next()){
				col.add(this.rs2Object(rs));
			}
		}catch(Exception err){
			err.printStackTrace();
		}finally{
			try {
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		return col;
	}
	/**
	 * 为通用查询动态的拼接sql的条件部分，基本思路是：
	 * 如果用户填写了相应的条件，那么才在sql中添加对应的条件
	 * @param sql sql的主干部分
	 * @param uqm 封装查询条件的数据模型
	 * @return 拼接好的sql语句
	 */
	private String prepareSql(String sql,UserQueryModel uqm){
		StringBuffer buffer = new StringBuffer();
		buffer.append(sql);
		//绝对匹配
		if(uqm.getUuid()!=null && uqm.getUuid().trim().length()>0){
			buffer.append(" and uuid=? ");
		}
		//模糊匹配
		if(uqm.getName()!=null && uqm.getName().trim().length()>0){
			buffer.append(" and name like ? ");
		}
		//区间匹配
		if(uqm.getAge() > 0){
			buffer.append(" and age >=? ");
		}
		if(uqm.getAge2() > 0){
			buffer.append(" and age <=? ");
		}
		return buffer.toString();
	}
	/**
	 * 为通用查询的sql动态设置条件的值
	 * @param pstmt 预处理查询sql的对象
	 * @param uqm 封装查询条件的数据模型
	 * @throws Exception
	 */
	private void setValue(PreparedStatement pstmt,UserQueryModel uqm)throws Exception{
		int count = 1;
		if(uqm.getUuid()!=null && uqm.getUuid().trim().length()>0){
			pstmt.setString(count, uqm.getUuid());
			count++;
		}
		if(uqm.getName()!=null && uqm.getName().trim().length()>0){
			pstmt.setString(count, "%"+uqm.getName()+"%");
			count++;
		}
		if(uqm.getAge() > 0){
			pstmt.setInt(count, uqm.getAge());
			count++;
		}
		if(uqm.getAge2() > 0){
			pstmt.setInt(count, uqm.getAge2());
			count++;
		}
	}
	/**
	 * 把查询返回的结果集转换成为对象
	 * @param rs 查询返回的结果集
	 * @return 查询返回的结果集转换成为对象
	 * @throws Exception
	 */
	private UserModel rs2Object(ResultSet rs)throws Exception{
		UserModel um = new UserModel();
		String uuid = rs.getString("uuid");
		String name = rs.getString("name");
		int age = rs.getInt("age");
		
		um.setAge(age);
		um.setName(name);
		um.setUuid(uuid);
		
		return um;
	}
	
	public static void main(String[] args) {
		JDBCTest uj = new JDBCTest();
		//先新增几条
		UserModel um1 = new UserModel();
		um1.setUuid("u1");
		um1.setName("张三");
		um1.setAge(22);		
		uj.create(um1);		
		
		UserModel um2 = new UserModel();
		um2.setUuid("u2");
		um2.setName("李四");
		um2.setAge(25);		
		uj.create(um2);
		
		UserModel um3 = new UserModel();
		um3.setUuid("u3");
		um3.setName("王五");
		um3.setAge(32);		
		uj.create(um3);
		
		
		//测试查询
		UserQueryModel uqm = new UserQueryModel();
		uqm.setAge(25);
		uqm.setAge2(36);
		Collection<UserModel> col = uj.getByCondition(uqm);
		for(UserModel tempUm : col){
			System.out.println(tempUm);
		}
	}
}
