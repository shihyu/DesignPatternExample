package cn.javass.dp.templatemethod.example6;
/**
 * 描述用户的数据模型
 */
public class UserModel {
    private String uuid;
    private String name;
    private int age;
    public String getUuid() {
        return uuid;
    }
    public void setUuid(String uuid) {
        this.uuid = uuid;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String toString() {
        return "uuid=" + uuid + ",name=" + name + ",age=" + age;
    }
}
