package cn.javass.dp.chainofresponsibility.example3;

public class GeneralManager extends Handler{
	public String handleFeeRequest(String user, double fee) {
		String str = "";
		//总经理的权限很大，只要请求到了这里，他都可以处理
		if(fee >= 1000){
			//为了测试，简单点，只同意小李的
			if("小李".equals(user)){
				str = "总经理同意"+user+"聚餐费用"+fee+"元的请求";
			}else{
				//其他人一律不同意
				str = "总经理不同意"+user+"聚餐费用"+fee+"元的请求";
			}
			return str;
		}else{
			//如果还有后继的处理对象，继续传递
			if(this.successor!=null){
				return successor.handleFeeRequest(user, fee);
			}
		}
		return str;
	}

}
