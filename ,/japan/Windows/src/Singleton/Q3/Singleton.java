public class Singleton {
    private static Singleton singleton = null;
    private Singleton() {
        System.out.println("已產生實例。");
    }
    public static Singleton getInstance() {
        if (singleton == null) {
            singleton = new Singleton();
        }
        return singleton;
    }
}
