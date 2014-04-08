package cn.javass.dp.factorymethod.example1;
/**
 * 实现导出数据的业务功能对象
 */
public class ExportOperate {
    /**
     * 导出文件
     * @param type 用户选择的导出类型
     * @param data 需要保存的数据
     * @return 是否成功导出文件
     */
    public boolean export(int type, String data) {
        ExportFileApi api = null;

        //根据类型来选择究竟要创建哪一种导出文件对象
        if (type == 1) {
            api = new ExportTxtFile();
        } else if (type == 2) {
            api = new ExportDB();
        }

        return api.export(data);
    }
}
