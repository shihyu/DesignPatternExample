package cn.javass.dp.observer.example3;
import java.util.*;
/**
 * 报纸对象，具体的目标实现
 */
public class NewsPaper extends Subject {
    /**
     * 报纸的具体内容
     */
    private String content;
    /**
     * 获取报纸的具体内容
     * @return 报纸的具体内容
     */
    public String getContent() {
        return content;
    }
    /**
     * 示意，设置报纸的具体内容，相当于要出版报纸了
     * @param content 报纸的具体内容
     */
    public void setContent(String content) {
        this.content = content;
        //内容有了，说明又出报纸了，那就通知所有的读者
        notifyObservers(content);
    }
}
