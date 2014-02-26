public class Director {
    private Builder builder;
    public Director(Builder builder) {   // 先把Builder的子類別的個體，
        this.builder = builder;          // 儲存在builder欄位
    }
    public Object construct() {                   // 建立文件
        builder.makeTitle("Greeting");            // 標題
        builder.makeString("從早上到白天結束");      // 字串
        builder.makeItems(new String[]{           // 項目
            "早安。",
            "午安。",
        });
        builder.makeString("到了晚上");              // 另一個字串
        builder.makeItems(new String[]{             // 另一個項目
            "晚安。",
            "祝你有個好夢。",
            "再見。",
        });
        return builder.getResult();                 // 完成的文件就是傳回值
    }
}
