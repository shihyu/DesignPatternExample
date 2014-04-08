package cn.javass.dp.bridge.example7;

/**
 * 抽象的消息对象
 */
public abstract class AbstractMessage {
    /**
     * 持有一个实现部分的对象
     */
    protected MessageImplementor impl;
    /**
     * 构造方法，传入选择实现部分的类型
     * @param type 传入选择实现部分的类型
     */
    public AbstractMessage(int type) {
        if (type == 1) {
            this.impl = new MessageSMS();
        } else if (type == 2) {
            this.impl = new MessageEmail();
        } else if (type == 3) {
            this.impl = new MessageMobile();
        }
    }

    /**
     * 发送消息，转调实现部分的方法
     * @param message 要发送的消息内容
     * @param toUser 把消息发送的目的人员
     */
    public void sendMessage(String message, String toUser) {
        this.impl.send(message, toUser);
    }

}
