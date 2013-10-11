package cn.javass.dp.chainofresponsibility.example5;
/**
 * 实现为项目经理增加预支差旅费用申请处理的功能的子对象，
 * 现在的项目经理既可以处理聚餐费用申请，又可以处理预支差旅费用申请
 */
public class ProjectManager2 extends ProjectManager{
	public Object handleRequest(RequestModel rm){
		if(PreFeeRequestModel.FEE_TYPE.equals(rm.getType())){
			//表示预支差旅费用申请
			return myHandler(rm);
		}else{
			//其他的让父类去处理
			return super.handleRequest(rm);
		}
	}
	private Object myHandler(RequestModel rm) {
		//先把通用的对象造型回来
		PreFeeRequestModel frm = (PreFeeRequestModel)rm;
		//项目经理的权限比较小，只能在5000以内
		if(frm.getFee() < 5000){
			//工作需要嘛，统统同意
			System.out.println("项目经理同意"+frm.getUser()+"预支差旅费用"+frm.getFee()+"元的请求");
			return true;
		}else{
			//超过5000，继续传递给级别更高的人处理
			if(this.successor!=null){
				return this.successor.handleRequest(rm);
			}
		}
		return false;
	}
}
