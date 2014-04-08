package cn.javass.dp.templatemethod.example4;

public class Client {
    public static void main(String[] args) {
        //准备登录人的信息
        LoginModel lm = new LoginModel();
        lm.setLoginId("admin");
        lm.setPwd("workerpwd");
        //准备用来进行判断的对象
        LoginTemplate lt = new WorkerLogin();
        LoginTemplate lt2 = new NormalLogin();
        //进行登录测试
        boolean flag = lt.login(lm);
        System.out.println("可以登录工作平台=" + flag);

        boolean flag2 = lt2.login(lm);
        System.out.println("可以进行普通人员登录=" + flag2);

        //准备登录人的信息
        NormalLoginModel nlm = new NormalLoginModel();
        nlm.setLoginId("testUser");
        nlm.setPwd("testpwd");
        nlm.setQuestion("testQuestion");
        nlm.setAnswer("testAnswer");
        //准备用来进行判断的对象
        LoginTemplate lt3 = new NormalLogin2();
        //进行登录测试
        boolean flag3 = lt3.login(nlm);
        System.out.println("可以进行普通人员加强版登录=" + flag3);
    }
}
