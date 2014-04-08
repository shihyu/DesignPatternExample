package cn.javass.dp.abstractfactory.example4;

/**
 * 装机方案二：AMD的CPU + 微星的主板
 * 这里创建CPU和主板对象的时候，是对应的，能匹配上的
 */
public class Schema2 implements AbstractFactory {
    public Object createProduct(int type) {
        Object retObj = null;

        //type为1表示创建CPU，type为2表示创建主板
        if (type == 1) {
            retObj = new AMDCPU(939);
        } else if (type == 2) {
            retObj = new MSIMainboard(939);
        }

        return retObj;
    }
}