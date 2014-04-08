package cn.javass.dp.bridge.example7;
/**
 * 以Email的方式发送消息
 */
public class MessageEmail implements MessageImplementor {

    public void send(String message, String toUser) {
        System.out.println("使用Email的方式，发送消息'" + message + "'给" + toUser);
    }

}