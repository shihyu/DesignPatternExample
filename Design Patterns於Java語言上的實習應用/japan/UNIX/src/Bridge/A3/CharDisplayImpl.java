public class CharDisplayImpl extends DisplayImpl {
    private char head;
    private char body;
    private char foot;
    public CharDisplayImpl(char head, char body, char foot) {
        this.head = head;
        this.body = body;
        this.foot = foot;
    }
    public void rawOpen() {
        System.out.print(head);
    }
    public void rawPrint() {
        System.out.print(body);
    }
    public void rawClose() {
        System.out.println(foot);
    }
}
