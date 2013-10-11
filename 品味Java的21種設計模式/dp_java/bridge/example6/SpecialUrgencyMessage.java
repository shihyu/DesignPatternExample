package cn.javass.dp.bridge.example6;
/**
 * 特急消息
 */
public class SpecialUrgencyMessage extends AbstractMessage{

	public SpecialUrgencyMessage(MessageImplementor impl) {
		super(impl);
	}

	public void hurry(String messageId) {
		//执行催促的业务，发出催促的信息
	}

	public void sendMessage(String message, String toUser) {
		message = "特急："+message;
		super.sendMessage(message, toUser);
		//还需要增加一条待催促的信息
	}
}
