package cn.javass.dp.visitor.example2;
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
    /**
     * 企业客户对公司产品的偏好分析，示意一下
     */
    public void predilectionAnalyze() {
        //根据过往购买的历史、潜在购买意向
        //以及客户所在行业的发展趋势、客户的发展预期等的分析
        System.out.println("现在对企业客户" + this.getName() + "进行产品偏好分析");
    }
    /**
     * 企业客户价值分析，示意一下
     */
    public void worthAnalyze() {
        //根据购买的金额大小、购买的产品和服务的多少、购买的频率等进行分析
        //企业客户的标准会比个人客户的高
        System.out.println("现在对企业客户" + this.getName() + "进行价值分析");
    }
}
