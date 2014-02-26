public class Main {
    public static void main(String[] args) {
        System.out.println("Start.");
        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();
        if (obj1 == obj2) {
            System.out.println("obj1和obj2是同一實例。");
        } else {
            System.out.println("obj1跟obj2並非同一實例。");
        }
        System.out.println("End.");
    }
}
