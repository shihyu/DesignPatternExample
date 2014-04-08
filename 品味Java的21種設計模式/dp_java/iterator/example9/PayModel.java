package cn.javass.dp.iterator.example9;

public class PayModel {
    private String userName;
    private double pay;
    public String getUserName() {
        return userName;
    }
    public void setUserName(String userName) {
        this.userName = userName;
    }
    public double getPay() {
        return pay;
    }
    public void setPay(double pay) {
        this.pay = pay;
    }
    public String toString() {
        return "userName=" + userName + ",pay=" + pay;
    }
}
