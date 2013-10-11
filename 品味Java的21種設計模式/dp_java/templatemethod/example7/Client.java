package cn.javass.dp.templatemethod.example7;


public class Client {
	public static void main(String[] args) {
		//准备登录人的信息
		LoginModel lm = new LoginModel();
		lm.setLoginId("admin");
		lm.setPwd("workerpwd");
		//准备用来进行判断的对象
		LoginTemplate lt = new LoginTemplate();
		
		//进行登录测试，先测试普通人员登录
		boolean flag = lt.login(lm,new LoginCallback(){
			public String encryptPwd(String pwd, LoginTemplate template) {
				//自己不需要，直接转调模板中的默认实现
				return template.encryptPwd(pwd);
			}
			public LoginModel findLoginUser(String loginId) {
				// 这里省略具体的处理，仅做示意，返回一个有默认数据的对象
				LoginModel lm = new LoginModel();
				lm.setLoginId(loginId);
				lm.setPwd("testpwd");
				return lm;
			}
			public boolean match(LoginModel lm, LoginModel dbLm,
					LoginTemplate template) {
				//自己不需要覆盖，直接转调模板中的默认实现
				return template.match(lm, dbLm);
			}
			
		});
		System.out.println("可以进行普通人员登录="+flag);

		//测试工作人员登录
		boolean flag2 = lt.login(lm,new LoginCallback(){
			public String encryptPwd(String pwd, LoginTemplate template) {
				//覆盖父类的方法，提供真正的加密实现
				//这里对密码进行加密，比如使用：MD5、3DES等等，省略了
				System.out.println("使用MD5进行密码加密");
				return pwd;
			}
			public LoginModel findLoginUser(String loginId) {
				// 这里省略具体的处理，仅做示意，返回一个有默认数据的对象
				LoginModel lm = new LoginModel();
				lm.setLoginId(loginId);
				lm.setPwd("workerpwd");
				return lm;
			}
			public boolean match(LoginModel lm, LoginModel dbLm,
					LoginTemplate template) {
				//自己不需要覆盖，直接转调模板中的默认实现
				return template.match(lm, dbLm);
			}
			
		});		
		System.out.println("可以登录工作平台="+flag2);
	}
}
