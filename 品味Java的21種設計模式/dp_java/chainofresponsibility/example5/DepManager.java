package cn.javass.dp.chainofresponsibility.example5;
/**
 * 实现部门经理处理聚餐费用申请的对象
 */
public class DepManager extends Handler {
    public Object handleRequest(RequestModel rm) {
        if (FeeRequestModel.FEE_TYPE.equals(rm.getType())) {
            return handleFeeRequest(rm);
        } else {
            return super.handleRequest(rm);
        }
    }
    private Object handleFeeRequest(RequestModel rm) {
        //先把通用的对象造型回来
        FeeRequestModel frm = (FeeRequestModel)rm;
        String str = "";

        //部门经理的权限只能在1000以内
        if (frm.getFee() < 1000) {
            //为了测试，简单点，只同意小李申请的
            if ("小李".equals(frm.getUser())) {
                str = "部门经理同意" + frm.getUser() + "聚餐费用" + frm.getFee() + "元的请求";
            } else {
                //其他人一律不同意
                str = "部门经理不同意" + frm.getUser() + "聚餐费用" + frm.getFee() + "元的请求";
            }

            return str;
        } else {
            //超过1000，继续传递给级别更高的人处理
            if (this.successor != null) {
                return this.successor.handleRequest(rm);
            }
        }

        return str;
    }
}
