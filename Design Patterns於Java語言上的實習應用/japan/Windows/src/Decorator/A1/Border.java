public abstract class Border extends Display {
    protected Display display;          // この飾り枠がくるんでいる「中身」を指す
    protected Border(Display display) { // インスタンス生成時に「中身」を引数で指定
        this.display = display;
    }
}
