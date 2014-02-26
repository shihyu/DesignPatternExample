package drawer;

import command.Command;
import java.awt.Color;

public class ColorCommand implements Command {
    // 繪製對象
    protected Drawable drawable;
    // 繪製色彩
    private Color color;
    // 建構子
    public ColorCommand(Drawable drawable, Color color) {
        this.drawable = drawable;
        this.color = color;
    }
    // 執行
    public void execute() {
        drawable.setColor(color);
    }
}
