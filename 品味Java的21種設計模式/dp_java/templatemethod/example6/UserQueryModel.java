package cn.javass.dp.templatemethod.example6;
/**
 * 描述查询用户的条件数据的模型
 */
public class UserQueryModel extends UserModel {
    /**
     * 年龄是一个区间查询，也就是年龄查询的条件可以是：
     * age >= 条件值1  and  age <= 条件值2
     * 把UserModel中的age当作条件值1，
     * 这里定义的age2当作条件值2
     */
    private int age2;

    public int getAge2() {
        return age2;
    }

    public void setAge2(int age2) {
        this.age2 = age2;
    }
}
