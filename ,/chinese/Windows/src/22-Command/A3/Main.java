import command.*;
import drawer.*;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Main extends JFrame implements ActionListener {        
    // 繪製記錄
    private MacroCommand history = new MacroCommand();
    // 繪製區域
    private DrawCanvas canvas = new DrawCanvas(400, 400, history);
    // 刪除鍵
    private JButton clearButton  = new JButton("clear");

    // 建構子
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

    // ActionListener用
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
