package cn.javass.dp.templatemethod.example6;

import java.sql.PreparedStatement;
/**
 * 更新数据库的方法使用的回调接口
 */
public interface UpdateDBCallBack {
	/**
	 * 使用PreparedStatement来给sql中的"?"传参
	 * @param pstmt PreparedStatement 对象
	 * @throws Exception
	 */
	public void setValue(PreparedStatement pstmt)throws Exception;
}
