package language;

// <repeat command> ::= repeat <number> <command list>
public class RepeatCommandNode extends Node {
    private int number;
    private Node commandListNode;
    public void parse(Context context) throws ParseException {
        context.skipToken("repeat");
        number = context.currentNumber();
        context.nextToken();
        commandListNode = new CommandListNode();
        commandListNode.parse(context);
    }
    public void execute() throws ExecuteException {
        for (int i = 0; i < number; i++) {
            commandListNode.execute();
        }
    }
    public String toString() {
        return "[repeat " + number + " " + commandListNode + "]";
    }
}
