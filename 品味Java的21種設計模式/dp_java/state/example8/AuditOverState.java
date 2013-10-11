package cn.javass.dp.state.example8;

/**
 * 处理审核结束的类
 */
public class AuditOverState implements LeaveRequestState{
	public void doWork(StateMachine request) {
		//先把业务对象造型回来
		LeaveRequestModel lrm = (LeaveRequestModel)request.getBusinessVO();
		System.out.println(lrm.getUser()+"，你的请假申请已经审核结束，结果是："+lrm.getResult());
	}
}
