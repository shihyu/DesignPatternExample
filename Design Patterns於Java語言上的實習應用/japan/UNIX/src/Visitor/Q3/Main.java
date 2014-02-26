import java.util.Iterator;

public class Main {
    public static void main(String[] args) {
        try {
            Directory root1 = new Directory("root1");
            root1.add(new File("diary.html", 10));
            root1.add(new File("index.html", 20));

            Directory root2 = new Directory("root2");
            root2.add(new File("diary.html", 1000));
            root2.add(new File("index.html", 2000));

            AcceptorVector vec = new AcceptorVector();
            vec.add(root1);
            vec.add(root2);
            vec.add(new File("etc.html", 1234));

            vec.accept(new ListVisitor());
        } catch (FileTreatmentException e) {
            e.printStackTrace();
        }
    }
}
