import command.*;
import drawer.*;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Main extends JFrame implements ActionListener {        
    // …¡≤ËÕ˙ŒÚ
    private MacroCommand history = new MacroCommand();
    // …¡≤ËŒŒ∞Ë
    private DrawCanvas canvas = new DrawCanvas(400, 400, history);
    // æ√µÓ•‹•ø•Û
    private JButton clearButton  = new JButton("clear");

    // •≥•Û•π•»•È•Ø•ø
    public Main(String title) {
        super(title);

        this.addWindowListener(new WindowAdapter() {        
            public void windowClosing(WindowEvent e) {      
                System.exit(0);                             
            }                                               
        });                                                 
        canvas.addMouseMotionListener(new MouseMotionAdapter() {    
            public void mouseDragged(MouseEvent e) {                
                Command cmd = new DrawCommand(canvas, e.getPoint());    
                history.append(cmd);                                    
                cmd.execute();                                          
            }                                                           
        });                                                             
        clearButton.addActionListener(this);

        Box buttonBox = new Box(BoxLayout.X_AXIS);
        buttonBox.add(clearButton);
        Box mainBox = new Box(BoxLayout.Y_AXIS);
        mainBox.add(buttonBox);
        mainBox.add(canvas);
        getContentPane().add(mainBox);

        pack();
        setVisible(true);
    }

    // ActionListenerÕ—
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == clearButton) {
            history.clear();
            canvas.repaint();
        }
    }

    public static void main(String[] args) {
        new Main("Command Pattern Sample");
    }
}
