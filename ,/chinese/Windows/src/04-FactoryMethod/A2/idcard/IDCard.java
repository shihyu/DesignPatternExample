package idcard;
import framework.*;

public class IDCard extends Product {
    private String owner;
    private int serial;
    IDCard(String owner, int serial) {
        System.out.println("建立" + owner + "(" + serial + ")" + "的卡。");
        this.owner = owner;
        this.serial = serial;
    }
    public void use() {
        System.out.println("使用" + owner + "(" + serial + ")" + "的卡。");
    }
    public String getOwner() {
        return owner;
    }
    public int getSerial() {
        return serial;
    }
}
