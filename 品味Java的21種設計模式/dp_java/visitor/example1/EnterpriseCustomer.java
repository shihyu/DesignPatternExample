package cn.javass.dp.visitor.example1;
/**
 * 企业客户
 */
public class EnterpriseCustomer extends Customer {
    /**
     * 联系人
     */
    private String linkman;
    /**
     * 联系电话
     */
    private String linkTelephone;
    /**
     * 企业注册地址
     */
    private String registerAddress;


    public String getLinkman() {
        return linkman;
    }

    public void setLinkman(String linkman) {
        this.linkman = linkman;
    }

    public String getLinkTelephone() {
        return linkTelephone;
    }

    public void setLinkTelephone(String linkTelephone) {
        this.linkTelephone = linkTelephone;
    }

    public String getRegisterAddress() {
        return registerAddress;
    }

    public void setRegisterAddress(String registerAddress) {
        this.registerAddress = registerAddress;
    }

    /**
     * 企业客户提出服务请求的方法，示意一下
     */
    public void serviceRequest() {
        //企业客户提出的具体服务请求
        System.out.println(this.getName() + "企业提出服务请求");
    }
}
