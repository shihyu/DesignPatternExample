package cn.javass.dp.chainofresponsibility.example5;
/**
 * 实现总经理处理预支差旅费用申请的对象
 */
public class GeneralManager2 extends GeneralManager {
    public Object handleRequest(RequestModel rm) {
        if (PreFeeRequestModel.FEE_TYPE.equals(rm.getType())) {
            //表示预支差旅费用申请
            return myHandler(rm);
        } else {
            //其他的让父类去处理
            return super.handleRequest(rm);
        }
    }
    private Object myHandler(RequestModel rm) {
        //先把通用的对象造型回来
        PreFeeRequestModel frm = (PreFeeRequestModel)rm;

        if (frm.getFee() >= 5000) {
            //工作需要嘛，统统同意
            System.out.println("总经理同意" + frm.getUser() + "预支差旅费用" + frm.getFee() + "元的请求");
            return true;
        } else {
            //如果还有后继的处理对象，继续传递
            if (this.successor != null) {
                return this.successor.handleRequest(rm);
            }
        }

        return false;
    }
}
