package cn.javass.dp.proxy.example1;
import java.util.*;
public class Client {
    public static void main(String[] args) throws Exception {
        UserManager userManager = new UserManager();
        Collection<UserModel> col = userManager.getUserByDepId("0101");
        System.out.println(col);
    }
}