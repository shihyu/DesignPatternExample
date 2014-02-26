public class Main {
    public static void main(String[] args) {
        System.out.println("Start.");
        Singleton obj1 = Singleton.getInstance();
        Singleton obj2 = Singleton.getInstance();
        if (obj1 == obj2) {
            System.out.println("obj1和obj2是同一物件個體。");
        } else {
            System.out.println("obj1跟obj2並非同一物件個體。");
        }
        System.out.println("End.");
    }
}
