#pragma once

#include "DepUserModel.h"
#include "Dep.h"
#include "User.h"
#include <string>
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example3
				{

					///
					/// <summary> * 实现部门和人员交互的中介者实现类
					/// * 说明：为了演示的简洁性，只示例实现撤销部门和人员离职的功能 </summary>
					/// 
					class DepUserMediatorImpl
					{
					private:
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static DepUserMediatorImpl *mediator = new DepUserMediatorImpl();
						DepUserMediatorImpl();
					public:
						static DepUserMediatorImpl *getInstance();

					///	
					///	 <summary> * 测试用，记录部门和人员的关系 </summary>
					///	 
					private:
						Collection<DepUserModel*> *depUserCol;
					///	
					///	 <summary> * 初始化测试数据 </summary>
					///	 
						void initTestData();
					///	
					///	 <summary> * 完成因撤销部门的操作所引起的与人员的交互，需要去除相应的关系 </summary>
					///	 * <param name="depId"> 被撤销的部门对象的编号 </param>
					///	 * <returns> 是否已经正确的处理了因撤销部门所引起的与人员的交互 </returns>
					///	 
					public:
						virtual bool deleteDep(std::string depId);
					///	
					///	 <summary> * 完成因人员离职引起的与部门的交互 </summary>
					///	 * <param name="userId"> 离职的人员的编号 </param>
					///	 * <returns> 是否正确处理了因人员离职引起的与部门的交互 </returns>
					///	 
						virtual bool deleteUser(std::string userId);
					///	
					///	 <summary> * 测试用，在内部打印显示一下一个部门下的所有人员 </summary>
					///	 * <param name="dep"> 部门对象 </param>
					///	 
						virtual void showDepUsers(Dep *dep);
					///	
					///	 <summary> * 测试用，在内部打印显示一下一个人员所属的部门 </summary>
					///	 * <param name="user"> 人员对象 </param>
					///	 
						virtual void showUserDeps(User *user);
					///	
					///	 <summary> * 完成因人员调换部门引起的与部门的交互 </summary>
					///	 * <param name="userId"> 被调换的人员的编号 </param>
					///	 * <param name="oldDepId"> 调换前的部门的编号 </param>
					///	 * <param name="newDepId"> 调换后的部门的编号 </param>
					///	 * <returns> 是否正确处理了因人员调换部门引起的与部门的交互 </returns>
					///	 
						virtual bool changeDep(std::string userId, std::string oldDepId, std::string newDepId);


					///	
					///	 <summary> * 完成因部门合并操作所引起的与人员的交互 </summary>
					///	 * <param name="colDepIds"> 需要合并的部门的编号集合 </param>
					///	 * <param name="newDep"> 合并后新的部门对象 </param>
					///	 * <returns> 是否正确处理了因部门合并操作所引起的与人员的交互 </returns>
					///	 
						virtual bool joinDep(Collection<std::string> *colDepIds, Dep *newDep);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								depUserCol = std::vector<DepUserModel*>();

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}