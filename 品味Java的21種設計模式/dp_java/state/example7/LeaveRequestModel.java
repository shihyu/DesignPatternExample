package cn.javass.dp.state.example7;
/**
 * 请假单对象
 */
public class LeaveRequestModel {
	/**
	 * 请假人
	 */
	private String user;
	/**
	 * 请假开始时间
	 */
	private String beginDate;
	/**
	 * 请假天数
	 */
	private int leaveDays;
	/**
	 * 审核结果
	 */
	private String result;
	
	public String getResult() {
		return result;
	}

	public void setResult(String result) {
		this.result = result;
	}

	public String getUser() {
		return user;
	}

	public String getBeginDate() {
		return beginDate;
	}

	public int getLeaveDays() {
		return leaveDays;
	}
	public void setUser(String user) {
		this.user = user;
	}

	public void setBeginDate(String beginDate) {
		this.beginDate = beginDate;
	}

	public void setLeaveDays(int leaveDays) {
		this.leaveDays = leaveDays;
	}	
}
