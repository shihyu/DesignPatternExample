package cn.javass.dp.abstractfactory.example5;
/**
 * 抽象工厂，创建订单主、子记录对应的DAO对象
 */
public abstract class DAOFactory {
    /**
     * 创建订单主记录对应的DAO对象
     * @return 订单主记录对应的DAO对象
     */
    public abstract OrderMainDAO createOrderMainDAO();
    /**
     * 创建订单子记录对应的DAO对象
     * @return 订单子记录对应的DAO对象
     */
    public abstract OrderDetailDAO createOrderDetailDAO();
}
