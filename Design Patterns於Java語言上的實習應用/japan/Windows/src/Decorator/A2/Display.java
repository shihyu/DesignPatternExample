public abstract class Display {
    public abstract int getColumns();               // ‰¡‚Ì•¶š”‚ğ“¾‚é
    public abstract int getRows();                  // c‚Ìs”‚ğ“¾‚é
    public abstract String getRowText(int row);     // row”Ô–Ú‚Ì•¶š—ñ‚ğ“¾‚é
    public final void show() {                      // ‘S•”•\¦‚·‚é
        for (int i = 0; i < getRows(); i++) {
            System.out.println(getRowText(i));
        }
    }
}
