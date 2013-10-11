package cn.javass.dp.mediator.example3;

public class Client {
	public static void main(String[] args) {
		DepUserMediatorImpl mediator = DepUserMediatorImpl.getInstance();
		//准备要撤销的部门，仅仅需要一个部门编号
		Dep dep = new Dep();
		dep.setDepId("d1");
		Dep dep2 = new Dep();
		dep2.setDepId("d2");
		//准备用于测试的人员，也只需要一个人员编号
		User user = new User();
		user.setUserId("u1");
		
		//测试撤销部门，在运行之前，输出一下，看这个人员属于哪些部门		
		System.out.println("撤销部门前------------------");
		mediator.showUserDeps(user);
		
		//真正执行业务，撤销这个部门
		dep.deleteDep();
		
		//再次输出一下，看这个人员属于哪些部门
		System.out.println("撤销部门后------------------");
		mediator.showUserDeps(user);
		
		//测试人员离职，在运行之前，输出一下，看这个部门下都有哪些人员
		System.out.println("---------------------------------");
		System.out.println("人员离职前------------------");
		mediator.showDepUsers(dep2);
		
		//真正执行业务，人员离职
		user.dimission();
		
		//再次输出一下，看这个部门下都有哪些人员
		System.out.println("人员离职后------------------");
		mediator.showDepUsers(dep2);
	}
}
