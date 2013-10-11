package cn.javass.dp.templatemethod.example8;
import java.util.*;
public class Client {
	public static void main(String[] args) {
		//准备要测试的数据
		UserModel um1 = new UserModel("u1","user1",23);
		UserModel um2 = new UserModel("u2","user2",22);
		UserModel um3 = new UserModel("u3","user3",21);
		UserModel um4 = new UserModel("u4","user4",24);
		//添加到列表中
		List<UserModel> list = new ArrayList<UserModel>();
		list.add(um1);
		list.add(um2);
		list.add(um3);
		list.add(um4);
		
		System.out.println("排序前---------------------〉");
		printList(list);
		//实现比较器，也可以单独用一个类来实现
		Comparator c = new Comparator(){
			public int compare(Object obj1, Object obj2) {
				//假如实现按照年龄升序排序
				UserModel tempUm1 = (UserModel)obj1;
				UserModel tempUm2 = (UserModel)obj2;
				if(tempUm1.getAge() > tempUm2.getAge()){
					return 1;
				}else if(tempUm1.getAge() == tempUm2.getAge()){
					return 0;
				}else if(tempUm1.getAge() < tempUm2.getAge()){
					return -1;
				}
				return 0;
			}};
		
			//排序	
		Collections.sort(list,c);
		
		System.out.println("排序后---------------------〉");
		printList(list);
		
	}
	private static void printList(List<UserModel> list){
		for(UserModel um : list){
			System.out.println(um);
		}
	}
}