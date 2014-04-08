package cn.javass.dp.observer.example5;

public class Client {
    public static void main(String[] args) {
        //创建水质主题对象
        WaterQuality subject = new WaterQuality();
        //创建几个观察者
        WatcherObserver watcher1 = new Watcher();
        watcher1.setJob("监测人员");
        WatcherObserver watcher2 = new Watcher();
        watcher2.setJob("预警人员");
        WatcherObserver watcher3 = new Watcher();
        watcher3.setJob("监测部门领导");
        //注册观察者
        subject.attach(watcher1);
        subject.attach(watcher2);
        subject.attach(watcher3);

        //填写水质报告
        System.out.println("当水质为正常的时候------------------〉");
        subject.setPolluteLevel(0);
        System.out.println("当水质为轻度污染的时候---------------〉");
        subject.setPolluteLevel(1);
        System.out.println("当水质为中度污染的时候---------------〉");
        subject.setPolluteLevel(2);
    }
}
