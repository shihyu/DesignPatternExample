package command;

import java.util.Stack;
import java.util.Iterator;

public class MacroCommand implements Command {
    // 命令の集合
    private Stack commands = new Stack();
    // 実行
    public void execute() {
        Iterator it = commands.iterator();
        while (it.hasNext()) {
            ((Command)it.next()).execute();
        }
    }
    // 追加
    public void append(Command cmd) {
        if (cmd != this) {
            commands.push(cmd);
        }
    }
    // 最後の命令を削除
    public void undo() {
        if (!commands.empty()) {
            commands.pop();
        }
    }
    // 全部削除
    public void clear() {
        commands.clear();
    }
}
