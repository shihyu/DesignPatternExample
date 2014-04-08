package cn.javass.dp.proxy.example3;
/**
 * 描述用户数据的对象
 */
public class UserModel implements UserModelApi {
    /**
     * 用户编号
     */
    private String userId;
    /**
     * 用户姓名
     */
    private String name;
    /**
     * 部门编号
     */
    private String depId;
    /**
     * 性别
     */
    private String sex;

    public String getUserId() {
        return userId;
    }
    public void setUserId(String userId) {
        this.userId = userId;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getDepId() {
        return depId;
    }
    public void setDepId(String depId) {
        this.depId = depId;
    }
    public String getSex() {
        return sex;
    }
    public void setSex(String sex) {
        this.sex = sex;
    }

    @Override
    public String toString() {
        return "userId=" + userId + ",name=" + name + ",depId=" + depId + ",sex=" + sex + "\n";
    }
}
