public class Hand {
    public static final int HANDVALUE_GUU = 0;  // 表示石頭之值
    public static final int HANDVALUE_CHO = 1;  // 表示剪刀之值
    public static final int HANDVALUE_PAA = 2;  // 表示布之值
    public static final Hand[] hand = {         // 表示猜拳手勢的3個實例
        new Hand(HANDVALUE_GUU),
        new Hand(HANDVALUE_CHO),
        new Hand(HANDVALUE_PAA),
    };
    private static final String[] name = {      // 猜拳手勢的字串
        "石頭", "剪刀", "布",
    };
    private int handvalue;                      // 猜拳手勢之值
    private Hand(int handvalue) {
        this.handvalue = handvalue;
    }
    public static Hand getHand(int handvalue) { // 從值取得實例
        return hand[handvalue];
    }
    public boolean isStrongerThan(Hand h) {     // 若this贏過h，則為true
        return fight(h) == 1;
    }
    public boolean isWeakerThan(Hand h) {       // 若this輸給h，則為true
        return fight(h) == -1;
    }

    private int fight(Hand h) {           // 平手則為0，若this勝出則為1、若h勝出則為-1
        if (this == h) {
            return 0;
        } else if ((this.handvalue + 1) % 3 == h.handvalue) {
            return 1;
        } else {
            return -1;
        }
    }
    public String toString() {            // 轉換成字串
        return name[handvalue];
    }
}
