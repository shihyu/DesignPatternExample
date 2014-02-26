public class Singleton {
    private static Singleton singleton = new Singleton();
    private Singleton() {
        System.out.println("已產生物件個體。");
    }
    public static Singleton getInstance() {
        return singleton;
    }
}
