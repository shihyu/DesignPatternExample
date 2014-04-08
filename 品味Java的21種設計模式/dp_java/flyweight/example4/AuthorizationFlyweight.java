package cn.javass.dp.flyweight.example4;

import java.util.Collection;

/**
 * 封装授权数据中重复出现部分的享元对象
 */
public class AuthorizationFlyweight implements Flyweight {
    /**
     * 内部状态，安全实体
     */
    private String securityEntity;
    /**
     * 内部状态，权限
     */
    private String permit;
    /**
     * 构造方法，传入状态数据
     * @param state 状态数据，包含安全实体和权限的数据，用","分隔
     */
    public AuthorizationFlyweight(String state) {
        String ss[] = state.split(",");
        securityEntity = ss[0];
        permit = ss[1];
    }

    public String getSecurityEntity() {
        return securityEntity;
    }
    public String getPermit() {
        return permit;
    }

    public boolean match(String securityEntity, String permit) {
        if (this.securityEntity.equals(securityEntity)
            && this.permit.equals(permit)) {
            return true;
        }

        return false;
    }

    public void add(Flyweight f) {
        throw new UnsupportedOperationException("对象不支持这个功能");
    }
}
