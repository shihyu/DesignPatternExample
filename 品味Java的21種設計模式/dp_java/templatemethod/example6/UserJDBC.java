package cn.javass.dp.templatemethod.example6;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Collection;
/**
 * 具体的实现用户管理的增删改查功能
 */
public class UserJDBC extends JDBCTemplate{	
	protected String getMainSql(int type) {
		//根据操作类型，返回相应的主干sql语句
		String sql = "";
		if(type == TYPE_CREATE){
			sql = "insert into tbl_testuser values(?,?,?)";
		}else if(type == TYPE_DELETE){
			sql = "delete from tbl_testuser where uuid=?";
		}else if(type == TYPE_UPDATE){
			sql = "update tbl_testuser set name=?,age=? where uuid=?";
		}else if(type == TYPE_CONDITION){
			sql = "select * from tbl_testuser where 1=1 ";
		}
		return sql;
	}
	protected void setUpdateSqlValue(int type, PreparedStatement pstmt,
			Object obj) throws Exception{
		//设置增、删、改操作的sql中"?"对应的值
		if(type == TYPE_CREATE){
			this.setCreateValue(pstmt, (UserModel)obj);
		}else if(type == TYPE_DELETE){
			this.setDeleteValue(pstmt, (UserModel)obj);
		}else if(type == TYPE_UPDATE){
			this.setUpdateValue(pstmt, (UserModel)obj);
		}
	}
	protected Object rs2Object(ResultSet rs)throws Exception{
		UserModel um = new UserModel();
		String uuid = rs.getString("uuid");
		String name = rs.getString("name");
		int age = rs.getInt("age");
		
		um.setAge(age);
		um.setName(name);
		um.setUuid(uuid);
		
		return um;
	}
	protected String prepareQuerySql(String sql,Object qm){
		UserQueryModel uqm = (UserQueryModel)qm;
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
	protected void setQuerySqlValue(PreparedStatement pstmt,Object qm)throws Exception{
		UserQueryModel uqm = (UserQueryModel)qm;
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
	private void setCreateValue(PreparedStatement pstmt,UserModel um)throws Exception{
		pstmt.setString(1, um.getUuid());
		pstmt.setString(2, um.getName());
		pstmt.setInt(3, um.getAge());
	}
	private void setUpdateValue(PreparedStatement pstmt,UserModel um)throws Exception{
		pstmt.setString(1, um.getName());
		pstmt.setInt(2, um.getAge());
		pstmt.setString(3, um.getUuid());
	}
	private void setDeleteValue(PreparedStatement pstmt,UserModel um)throws Exception{
		pstmt.setString(1, um.getUuid());
	}
}
