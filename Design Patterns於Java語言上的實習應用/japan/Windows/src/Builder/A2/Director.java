public class Director {
    private Builder builder;
    public Director(Builder builder) {      // Builderのサブクラスのインスタンスが与えられるので、
        this.builder = builder;             // builderフィールドに保持しておく
    }
    public Object construct() {             // 文書構築
        builder.makeTitle("Greeting");              // タイトル
        builder.makeString("朝から昼にかけて");     // 文字列
        builder.makeItems(new String[]{             // 箇条書き
            "おはようございます。",
            "こんにちは。",
        });
        builder.makeString("夜に");                 // 別の文字列
        builder.makeItems(new String[]{             // 別の箇条書き
            "こんばんは。",
            "おやすみなさい。",
            "さようなら。",
        });
        return builder.getResult();                 // できた文書が戻り値になる
    }
}
