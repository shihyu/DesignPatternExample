package cn.javass.dp.visitor.example4;
/**
 * 个人客户
 */
public class PersonalCustomer extends Customer {
    /**
     * 联系电话
     */
    private String telephone;
    /**
     * 年龄
     */
    private int age;

    public String getTelephone() {
        return telephone;
    }
    public void setTelephone(String telephone) {
        this.telephone = telephone;
    }
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void accept(Visitor visitor) {
        //回调访问者对象的相应方法
        visitor.visitPersonalCustomer(this);
    }
}