public class CountDisplay extends Display {
    public CountDisplay(DisplayImpl impl) {
        super(impl);
    }
    public void multiDisplay(int times) {       // times‰ñŒJ‚è•Ô‚µ‚Ä•\Ž¦‚·‚é
        open();
        for (int i = 0; i < times; i++) {
            print();
        }
        close();
    }
}
