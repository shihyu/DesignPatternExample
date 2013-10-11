#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example8
				{

					void Client::main(std::string args[])
					{
						//准备要测试的数据
						UserModel *um1 = new UserModel("u1","user1",23);
						UserModel *um2 = new UserModel("u2","user2",22);
						UserModel *um3 = new UserModel("u3","user3",21);
						UserModel *um4 = new UserModel("u4","user4",24);
						//添加到列表中
						std::vector<UserModel*> list = std::vector<UserModel*>();
						list.push_back(um1);
						list.push_back(um2);
						list.push_back(um3);
						list.push_back(um4);

						puts("排序前---------------------〉");
						printList(list);
						//实现比较器，也可以单独用一个类来实现
//JAVA TO C++ CONVERTER TODO TASK: Anonymous inner classes are not converted to C++:
//						Comparator c = new Comparator()
										//		{
										//			public int compare(Object obj1, Object obj2)
										//			{
										//				//假如实现按照年龄升序排序
										//				UserModel tempUm1 = (UserModel)obj1;
										//				UserModel tempUm2 = (UserModel)obj2;
										//				if(tempUm1.getAge() > tempUm2.getAge())
										//				{
										//					return 1;
										//				}
										//				else if(tempUm1.getAge() == tempUm2.getAge())
										//				{
										//					return 0;
										//				}
										//				else if(tempUm1.getAge() < tempUm2.getAge())
										//				{
										//					return -1;
										//				}
										//				return 0;
										//			}
										//		};

							//排序	
						Collections::sort(list,c);

						puts("排序后---------------------〉");
						printList(list);

					}

					void Client::printList(std::vector<UserModel*> &list)
					{
						for (std::vector<UserModel*>::const_iterator um = list.begin(); um != list.end(); ++um)
						{
							puts(*um);
						}
					}
				}
			}
		}
	}
}
