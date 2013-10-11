package cn.javass.dp.templatemethod.example7;
/**
 *	登录控制的模板
 */
public class LoginTemplate {
	/**
	 * 判断登录数据是否正确，也就是是否能登录成功
	 * @param lm 封装登录数据的Model
	 * @param callback LoginCallback对象
	 * @return true表示登录成功，false表示登录失败
	 */
	public final boolean login(LoginModel lm,LoginCallback callback){
		//1：根据登录人员的编号去获取相应的数据
		LoginModel dbLm = callback.findLoginUser(lm.getLoginId());
		if(dbLm!=null){
			//2：对密码进行加密
			String encryptPwd = callback.encryptPwd(lm.getPwd(),this);
			//把加密后的密码设置回到登录数据模型里面
			lm.setPwd(encryptPwd);
			//3：判断是否匹配
			return callback.match(lm, dbLm,this);
		}
		return false;
	}
	/**
	 * 对密码数据进行加密
	 * @param pwd 密码数据
	 * @return 加密后的密码数据
	 */
	public String encryptPwd(String pwd){
		return pwd;
	}
	/**
	 * 判断用户填写的登录数据和存储中对应的数据是否匹配得上
	 * @param lm 用户填写的登录数据
	 * @param dbLm 在存储中对应的数据
	 * @return true表示匹配成功，false表示匹配失败
	 */
	public boolean match(LoginModel lm,LoginModel dbLm){
		if(lm.getLoginId().equals(dbLm.getLoginId()) 
				&& lm.getPwd().equals(dbLm.getPwd())){
			return true;
		}
		return false;
	}
}
