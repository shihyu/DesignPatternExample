import javax.swing.*;

public class Main {
    public static void main(String[] args) {
        Director director = new Director(new FrameBuilder());
        JFrame frame = (JFrame)director.construct();
        frame.setVisible(true);
    }
}
