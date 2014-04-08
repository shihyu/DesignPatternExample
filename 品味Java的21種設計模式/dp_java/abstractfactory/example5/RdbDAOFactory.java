package cn.javass.dp.abstractfactory.example5;

public class RdbDAOFactory extends DAOFactory {
    public OrderDetailDAO createOrderDetailDAO() {
        return new RdbDetailDAOImpl();
    }
    public OrderMainDAO createOrderMainDAO() {
        return new RdbMainDAOImpl();
    }
}
