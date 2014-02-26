public class Main {
    public static void main(String[] args) {
        Printable p = new PrinterProxy("Alice");
        System.out.println("�{쫇ず쫁붙촑" + p.getPrinterName() + "좧");
        p.setPrinterName("Bob");
        System.out.println("�{쫇ず쫁붙촑" + p.getPrinterName() + "좧");
        p.print("Hello, world.");
    }
}
