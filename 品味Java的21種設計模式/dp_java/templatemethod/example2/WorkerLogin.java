package cn.javass.dp.templatemethod.example2;

/**
 * 工作人员登录控制的逻辑处理
 */
public class WorkerLogin {
    /**
     * 判断登录数据是否正确，也就是是否能登录成功
     * @param lm 封装登录数据的Model
     * @return true表示登录成功，false表示登录失败
     */
    public boolean login(LoginModel lm) {
        //1：根据工作人员编号去获取工作人员的数据
        WorkerModel wm = this.findWorkerByWorkerId(lm.getWorkerId());

        //2：判断从前台传递过来的用户名和加密后的密码数据，和数据库中已有的数据是否匹配
        //先判断工作人员是否存在，如果wm为null，说明工作人员肯定不存在
        //但是不为null，工作人员不一定存在，
        //因为数据层可能返回new WorkerModel();因此还需要做进一步的判断
        if (wm != null) {
            //3：把从前台传来的密码数据，使用相应的加密算法进行加密运算
            String encryptPwd = this.encryptPwd(lm.getPwd());

            //如果工作人员存在，检查工作人员编号和密码是否匹配
            if (wm.getWorkerId().equals(lm.getWorkerId())
                && wm.getPwd().equals(encryptPwd)) {
                return true;
            }
        }

        return false;
    }
    /**
     * 对密码数据进行加密
     * @param pwd 密码数据
     * @return 加密后的密码数据
     */
    private String encryptPwd(String pwd) {
        //这里对密码进行加密，省略了
        return pwd;
    }
    /**
     * 根据工作人员编号获取工作人员的详细信息
     * @param workerId 工作人员编号
     * @return 对应的工作人员的详细信息
     */
    private WorkerModel findWorkerByWorkerId(String workerId) {
        // 这里省略具体的处理，仅做示意，返回一个有默认数据的对象
        WorkerModel wm = new WorkerModel();
        wm.setWorkerId(workerId);
        wm.setName("Worker1");
        wm.setPwd("worker1");
        wm.setUuid("Worker0001");
        return wm;
    }
}
