public class CountDisplay extends Display {
    public CountDisplay(DisplayImpl impl) {
        super(impl);
    }
    public void multiDisplay(int times) {       // times回繰り返して表示する
        open();
        for (int i = 0; i < times; i++) {
            print();
        }
        close();
    }
}
