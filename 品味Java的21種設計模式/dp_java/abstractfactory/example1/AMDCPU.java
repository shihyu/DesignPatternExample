package cn.javass.dp.abstractfactory.example1;
/**
 * AMD的CPU实现
 */
public class AMDCPU implements CPUApi {
    /**
     * CPU的针脚数目
     */
    private int pins = 0;
    /**
     * 构造方法，传入CPU的针脚数目
     * @param pins CPU的针脚数目
     */
    public AMDCPU(int pins) {
        this.pins = pins;
    }
    public void calculate() {
        System.out.println("now in AMD CPU,pins=" + pins);
    }
}
