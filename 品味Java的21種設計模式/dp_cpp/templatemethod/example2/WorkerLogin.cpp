#include "WorkerLogin.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example2
				{

					bool WorkerLogin::login(LoginModel *lm)
					{
						//1：根据工作人员编号去获取工作人员的数据
						WorkerModel *wm = this->findWorkerByWorkerId(lm->getWorkerId());
						//2：判断从前台传递过来的用户名和加密后的密码数据，和数据库中已有的数据是否匹配
						//先判断工作人员是否存在，如果wm为null，说明工作人员肯定不存在
						//但是不为null，工作人员不一定存在，
						//因为数据层可能返回new WorkerModel();因此还需要做进一步的判断
						if (wm != 0)
						{
							//3：把从前台传来的密码数据，使用相应的加密算法进行加密运算
							std::string encryptPwd = this->encryptPwd(lm->getPwd());
							//如果工作人员存在，检查工作人员编号和密码是否匹配
							if (wm->getWorkerId().equals(lm->getWorkerId()) && wm->getPwd().equals(encryptPwd))
							{
								return true;
							}
						}
						return false;
					}

					std::string WorkerLogin::encryptPwd(std::string pwd)
					{
						//这里对密码进行加密，省略了
						return pwd;
					}

					WorkerModel *WorkerLogin::findWorkerByWorkerId(std::string workerId)
					{
						// 这里省略具体的处理，仅做示意，返回一个有默认数据的对象
						WorkerModel *wm = new WorkerModel();
						wm->setWorkerId(workerId);
						wm->setName("Worker1");
						wm->setPwd("worker1");
						wm->setUuid("Worker0001");
						return wm;
					}
				}
			}
		}
	}
}