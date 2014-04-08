package cn.javass.dp.abstractfactory.example4;
/**
 * 技嘉的主板
 */
public class GAMainboard implements MainboardApi {
    /**
     * CPU插槽的孔数
     */
    private int cpuHoles = 0;
    /**
     * 构造方法，传入CPU插槽的孔数
     * @param cpuHoles CPU插槽的孔数
     */
    public GAMainboard(int cpuHoles) {
        this.cpuHoles = cpuHoles;
    }
    public void installCPU() {
        System.out.println("now in GAMainboard,cpuHoles=" + cpuHoles);
    }
}
