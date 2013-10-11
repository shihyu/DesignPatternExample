package cn.javass.dp.bridge.example2;
/**
 * 以站内短消息的方式发送普通消息
 */
public  class CommonMessageSMS implements Message{

	public void send(String message, String toUser) {
		System.out.println("使用站内短消息的方式，发送消息'"+message+"'给"+toUser);
	}
}
