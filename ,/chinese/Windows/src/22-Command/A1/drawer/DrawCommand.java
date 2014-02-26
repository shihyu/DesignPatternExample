package drawer;

import command.Command;
import java.awt.Point;

public class DrawCommand implements Command {
    // 繪製對象
    protected Drawable drawable;
    // 繪製位置
    private Point position;
    // 建構子
    public DrawCommand(Drawable drawable, Point position) {
        this.drawable = drawable;
        this.position = position;
    }
    // 執行
    public void execute() {
        drawable.draw(position.x, position.y);
    }
}
