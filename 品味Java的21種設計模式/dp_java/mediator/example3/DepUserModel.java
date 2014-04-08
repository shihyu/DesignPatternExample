package cn.javass.dp.mediator.example3;
/**
 *  描述部门和人员关系的类
 */
public class DepUserModel {
    /**
     * 用于部门和人员关系的编号，用做主键
     */
    private String depUserId;
    /**
     * 部门的编号
     */
    private String depId;
    /**
     * 人员的编号
     */
    private String userId;
    public String getDepUserId() {
        return depUserId;
    }
    public void setDepUserId(String depUserId) {
        this.depUserId = depUserId;
    }
    public String getDepId() {
        return depId;
    }
    public void setDepId(String depId) {
        this.depId = depId;
    }
    public String getUserId() {
        return userId;
    }
    public void setUserId(String userId) {
        this.userId = userId;
    }
}
