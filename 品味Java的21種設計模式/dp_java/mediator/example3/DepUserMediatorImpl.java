package cn.javass.dp.mediator.example3;

import java.util.*;
/**
 * 实现部门和人员交互的中介者实现类
 * 说明：为了演示的简洁性，只示例实现撤销部门和人员离职的功能
 */
public class DepUserMediatorImpl{
	private static DepUserMediatorImpl mediator = new DepUserMediatorImpl();
	private DepUserMediatorImpl(){
		//调用初始化测试数据的功能
		initTestData();
	}
	public static DepUserMediatorImpl getInstance(){
		return mediator;
	}
	
	/**
	 * 测试用，记录部门和人员的关系
	 */
	private Collection<DepUserModel> depUserCol = new ArrayList<DepUserModel>();
	/**
	 * 初始化测试数据
	 */
	private void initTestData(){
		//准备一些测试数据
		DepUserModel du1 = new DepUserModel();
		du1.setDepUserId("du1");
		du1.setDepId("d1");
		du1.setUserId("u1");		
		depUserCol.add(du1);
		
		DepUserModel du2 = new DepUserModel();
		du2.setDepUserId("du2");
		du2.setDepId("d1");
		du2.setUserId("u2");		
		depUserCol.add(du2);
		
		DepUserModel du3 = new DepUserModel();
		du3.setDepUserId("du3");
		du3.setDepId("d2");
		du3.setUserId("u3");		
		depUserCol.add(du3);
		
		DepUserModel du4 = new DepUserModel();
		du4.setDepUserId("du4");
		du4.setDepId("d2");
		du4.setUserId("u4");		
		depUserCol.add(du4);
		
		DepUserModel du5 = new DepUserModel();
		du5.setDepUserId("du5");
		du5.setDepId("d2");
		du5.setUserId("u1");		
		depUserCol.add(du5);
	}
	/**
	 * 完成因撤销部门的操作所引起的与人员的交互，需要去除相应的关系
	 * @param depId 被撤销的部门对象的编号
	 * @return 是否已经正确的处理了因撤销部门所引起的与人员的交互
	 */
	public boolean deleteDep(String depId) {
		//请注意：为了演示简单，部门撤销后，原部门的人员怎么处理等后续业务处理，这里就不管了
		
		//1：到记录部门和人员关系的集合里面，寻找跟这个部门相关的人员
		//设置一个临时的集合，记录需要清除的关系对象
		Collection<DepUserModel> tempCol = new ArrayList<DepUserModel>();
		for(DepUserModel du : depUserCol){
			if(du.getDepId().equals(depId)){
				//2：需要把这个相关的记录去掉，先记录下来
				tempCol.add(du);
			}
		}
		//3：从关系集合里面清除掉这些关系
		depUserCol.removeAll(tempCol);
		
		return true;
	}
	/**
	 * 完成因人员离职引起的与部门的交互
	 * @param userId 离职的人员的编号
	 * @return 是否正确处理了因人员离职引起的与部门的交互
	 */
	public boolean deleteUser(String userId) {
		//1：到记录部门和人员关系的集合里面，寻找跟这个人员相关的部门
		//设置一个临时的集合，记录需要清除的关系对象
		Collection<DepUserModel> tempCol = new ArrayList<DepUserModel>();
		for(DepUserModel du : depUserCol){
			if(du.getUserId().equals(userId)){
				//2：需要把这个相关的记录去掉，先记录下来
				tempCol.add(du);
			}
		}
		//3：从关系集合里面清除掉这些关系
		depUserCol.removeAll(tempCol);
	
		return true;
	}
	/**
	 * 测试用，在内部打印显示一下一个部门下的所有人员
	 * @param dep 部门对象
	 */
	public void showDepUsers(Dep dep) {
		for(DepUserModel du : depUserCol){
			if(du.getDepId().equals(dep.getDepId())){
				System.out.println("部门编号="+dep.getDepId()+"下面拥有人员，其编号是："+du.getUserId());
			}
		}
	}
	/**
	 * 测试用，在内部打印显示一下一个人员所属的部门
	 * @param user 人员对象
	 */
	public void showUserDeps(User user) {
		for(DepUserModel du : depUserCol){
			if(du.getUserId().equals(user.getUserId())){
				System.out.println("人员编号="+user.getUserId()+"属于部门编号是："+du.getDepId());
			}
		}
	}
	/**
	 * 完成因人员调换部门引起的与部门的交互
	 * @param userId 被调换的人员的编号
	 * @param oldDepId 调换前的部门的编号
	 * @param newDepId 调换后的部门的编号
	 * @return 是否正确处理了因人员调换部门引起的与部门的交互
	 */
	public boolean changeDep(String userId,String oldDepId, String newDepId) {
		//本示例不去实现了
		return false;
	}
	

	/**
	 * 完成因部门合并操作所引起的与人员的交互
	 * @param colDepIds 需要合并的部门的编号集合
	 * @param newDep 合并后新的部门对象
	 * @return 是否正确处理了因部门合并操作所引起的与人员的交互
	 */
	public boolean joinDep(Collection<String> colDepIds, Dep newDep) {
		//本示例不去实现了		
		return false;
	}
}
