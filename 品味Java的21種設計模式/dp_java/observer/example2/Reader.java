package cn.javass.dp.observer.example2;
/**
 * 真正的读者，为了简单就描述一下姓名
 */
public class Reader implements Observer {
    /**
     * 读者的姓名
     */
    private String name;

    public void update(Subject subject) {
        //这是采用拉的方式
        System.out.println(name + "收到报纸了，阅读先。内容是===" + ((NewsPaper)subject).getContent());
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
}
