import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class FrameBuilder extends Builder implements ActionListener {
    private JFrame frame = new JFrame();
    private Box box = new Box(BoxLayout.Y_AXIS);
    public void makeTitle(String title) {
        frame.setTitle(title);
    }
    public void makeString(String str) {
        box.add(new JLabel(str));
    }
    public void makeItems(String[] items) {
        Box innerbox = new Box(BoxLayout.Y_AXIS);
        for (int i = 0; i < items.length; i++) {
            JButton button = new JButton(items[i]);
            button.addActionListener(this);
            innerbox.add(button);
        }
        box.add(innerbox);
    }
    public Object getResult() {
        frame.getContentPane().add(box);
        frame.pack();
        frame.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
        return frame;
    }
    public void actionPerformed(ActionEvent e) {
        System.out.println(e.getActionCommand());
    }
}
