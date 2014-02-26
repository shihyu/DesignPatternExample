public class Main {
    public static void main(String[] args) {
        RandomCountDisplay d = new RandomCountDisplay(new StringDisplayImpl("Hello, Japan."));
        d.randomDisplay(10);
    }
}
