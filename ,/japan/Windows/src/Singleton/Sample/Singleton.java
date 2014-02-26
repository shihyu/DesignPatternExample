public class Singleton {
    private static Singleton singleton = new Singleton();
    private Singleton() {
        System.out.println("已產生實例。");
    }
    public static Singleton getInstance() {
        return singleton;
    }
}
