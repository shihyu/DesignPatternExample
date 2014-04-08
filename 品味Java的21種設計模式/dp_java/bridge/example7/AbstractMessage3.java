package cn.javass.dp.bridge.example7;

/**
 * 抽象的消息对象
 */
public abstract class AbstractMessage3 {
    /**
     * 持有一个实现部分的对象
     */
    protected MessageImplementor impl;
    /**
     * 构造方法
     */
    public AbstractMessage3() {
        //创建一个默认的实现
        this.impl = new MessageSMS();
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
