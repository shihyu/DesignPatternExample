package cn.javass.dp.templatemethod.example4;
/**
 * 工作人员登录控制的逻辑处理
 */
public class WorkerLogin extends LoginTemplate {

    public LoginModel findLoginUser(String loginId) {
        // 这里省略具体的处理，仅做示意，返回一个有默认数据的对象
        LoginModel lm = new LoginModel();
        lm.setLoginId(loginId);
        lm.setPwd("workerpwd");
        return lm;
    }
    public String encryptPwd(String pwd) {
        //覆盖父类的方法，提供真正的加密实现
        //这里对密码进行加密，比如使用：MD5、3DES等等，省略了
        System.out.println("使用MD5进行密码加密");
        return pwd;
    }
}
