public class Player {
    private String name;
    private Strategy strategy;
    private int wincount;
    private int losecount;
    private int gamecount;
    public Player(String name, Strategy strategy) {         // –¼‘O‚Æí—ª‚ğö‚¯‚ç‚ê‚é
        this.name = name;
        this.strategy = strategy;
    }
    public Hand nextHand() {                                // í—ª‚É‚¨‚¤‚©‚ª‚¢‚ğ—§‚Ä‚é
        return strategy.nextHand();
    }
    public void win() {                 // Ÿ‚Á‚½
        strategy.study(true);
        wincount++;
        gamecount++;
    }
    public void lose() {                // •‰‚¯‚½
        strategy.study(false);
        losecount++;
        gamecount++;
    }
    public void even() {                // ˆø‚«•ª‚¯
        gamecount++;
    }
    public String toString() {
        return "[" + name + ":" + gamecount + " games, " + wincount + " win, " + losecount + " lose" + "]";
    }
}
