package cn.javass.dp.templatemethod.example4;
/**
 * 封装进行登录控制所需要的数据，在公共数据的基础上，
 * 添加具体模块需要的数据
 */
public class NormalLoginModel extends LoginModel{
	/**
	 * 密码验证问题
	 */
	private String question;
	/**
	 * 密码验证答案
	 */
	private String answer;
	public String getQuestion() {
		return question;
	}
	public void setQuestion(String question) {
		this.question = question;
	}
	public String getAnswer() {
		return answer;
	}
	public void setAnswer(String answer) {
		this.answer = answer;
	}
	
}
