package cn.javass.dp.templatemethod.example1;
/**
 * 描述登录人员登录时填写的信息的数据模型
 */
public class LoginModel {
	private String userId,pwd;

	public String getUserId() {
		return userId;
	}

	public void setUserId(String userId) {
		this.userId = userId;
	}

	public String getPwd() {
		return pwd;
	}

	public void setPwd(String pwd) {
		this.pwd = pwd;
	}

}
