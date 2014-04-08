package cn.javass.dp.decorator.example6;
/**
 * 商品销售管理的业务接口
 */
public interface GoodsSaleEbi {
    /**
     * 保存销售信息，本来销售数据应该是多条，太麻烦了，为了演示，简单点
     * @param user 操作人员
     * @param customer 客户
     * @param saleModel 销售数据
     * @return 是否保存成功
     */
    public boolean sale(String user, String customer, SaleModel saleModel);
}
