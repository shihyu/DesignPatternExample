package cn.javass.dp.state.example6;

public class Client {
	public static void main(String[] args) {
		TestDB.map.put("a","11");
		System.out.println(TestDB.map.size());
		try {
			Thread.sleep(100000L);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("over");
	}
}
