package drawer;

import command.Command;
import java.awt.Color;

public class ColorCommand implements Command {
    // 描画対象
    protected Drawable drawable;
    // 描画色
    private Color color;
    // コンストラクタ
    public ColorCommand(Drawable drawable, Color color) {
        this.drawable = drawable;
        this.color = color;
    }
    // 実行
    public void execute() {
        drawable.setColor(color);
    }
}
