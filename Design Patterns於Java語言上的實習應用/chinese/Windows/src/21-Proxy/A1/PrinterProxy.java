public class PrinterProxy implements Printable {
    private String name;            // 名稱
    private Printable real;         // 「本人」
    private String className;       // 「本人」的類別名稱
    public PrinterProxy(String name, String className) {      // 建構子
        this.name = name;
        this.className = className;                                                 
    }
    public synchronized void setPrinterName(String name) {  // 命名
        if (real != null) {
            real.setPrinterName(name);  //「本人」也要命名
        }
        this.name = name;
    }
    public String getPrinterName() {    // 取得名稱
        return name;
    }
    public void print(String string) {  // 輸出到畫面上
        realize();
        real.print(string);
    }
    private synchronized void realize() {   // 產生「本人」
        if (real == null) {
            try {                                                                       
                real = (Printable)Class.forName(className).newInstance();               
                real.setPrinterName(name);                                              
            } catch (ClassNotFoundException e) {                                        
                System.err.println("找不到類別 " + className + "。");      
            } catch (Exception e) {                                                     
                e.printStackTrace();                                                    
            }                                                                           
        }
    }
}
