package drawer;

import command.*;

import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class DrawCanvas extends Canvas implements Drawable {
    // •`‰æF               
    private Color color;    
    // •`‰æ‚·‚é“_‚Ì”¼Œa     
    private int radius;     
    // —š—ğ
    private MacroCommand history;
    // ƒRƒ“ƒXƒgƒ‰ƒNƒ^
    public DrawCanvas(int width, int height, MacroCommand history) {
        setSize(width, height);
        setBackground(Color.white);
        this.history = history;
        init();                             
    }
    // —š—ğ‘S‘Ì‚ğÄ•`‰æ
    public void paint(Graphics g) {
        history.execute();
    }
    // ‰Šú‰»                               
    public void init() {                    
        color = Color.red;                  
        radius = 6;                         
    }                                       
    // •`‰æ
    public void draw(int x, int y) {
        Graphics g = getGraphics();
        g.setColor(color);
        g.fillOval(x - radius, y - radius, radius * 2, radius * 2);
    }
    public void setColor(Color color) {     
        this.color = color;                 
    }                                       
}
