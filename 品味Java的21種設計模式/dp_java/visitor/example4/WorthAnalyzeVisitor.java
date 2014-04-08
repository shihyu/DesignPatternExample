package cn.javass.dp.visitor.example4;
/**
 * 具体的访问者，实现对客户价值分析
 */
public class WorthAnalyzeVisitor implements Visitor {
    public void visitEnterpriseCustomer(EnterpriseCustomer ec) {
        //根据购买的金额大小、购买的产品和服务的多少、购买的频率等进行分析
        //企业客户的标准会比个人客户的高
        System.out.println("现在对企业客户" + ec.getName() + "进行价值分析");
    }
    public void visitPersonalCustomer(PersonalCustomer pc) {
        System.out.println("现在对个人客户" + pc.getName() + "进行价值分析");
    }
}