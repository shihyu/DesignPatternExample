package drawer;

import command.*;

import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class DrawCanvas extends Canvas implements Drawable {
    // 繪製色彩
    private Color color = Color.red;
    // 繪製點的半徑
    private int radius = 6;
    // 記錄
    private MacroCommand history;
    // 建構子
    public DrawCanvas(int width, int height, MacroCommand history) {
        setSize(width, height);
        setBackground(Color.white);
        this.history = history;
    }
    // 再度繪製整個記錄
    public void paint(Graphics g) {
        history.execute();
    }
    // 繪製
    public void draw(int x, int y) {
        Graphics g = getGraphics();
        g.setColor(color);
        g.fillOval(x - radius, y - radius, radius * 2, radius * 2);
    }
}
