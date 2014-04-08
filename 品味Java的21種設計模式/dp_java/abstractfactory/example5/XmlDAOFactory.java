package cn.javass.dp.abstractfactory.example5;

public class XmlDAOFactory extends DAOFactory {
    public OrderDetailDAO createOrderDetailDAO() {
        return new XmlDetailDAOImpl();
    }
    public OrderMainDAO createOrderMainDAO() {
        return new XmlMainDAOImpl();
    }
}