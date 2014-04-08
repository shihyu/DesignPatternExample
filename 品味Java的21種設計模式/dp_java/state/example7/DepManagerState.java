package cn.javass.dp.state.example7;

/**
 * 处理部门经理的审核，处理后对应审核结束状态
 */
public class DepManagerState implements LeaveRequestState {
    public void doWork(StateMachine request) {
        //先把业务对象造型回来
        LeaveRequestModel lrm = (LeaveRequestModel)request.getBusinessVO();

        //业务处理，把审核结果保存到数据库中

        //部门经理审核过后，直接转向审核结束状态了
        request.setState(new AuditOverState());

        //给申请人增加一个工作，让他察看审核结果
    }
}
