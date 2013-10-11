#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example6
				{

					void Client::main(std::string args[])
					{
						//创建业务对象
						GoodsSaleEbo *ebo = new GoodsSaleEbo();
						//准备测试数据
						SaleModel *saleModel = new SaleModel();
						saleModel->setGoods("张学友怀旧经典");
						saleModel->setSaleNum(10);

						//调用业务功能
						ebo->sale("小李", "张三", saleModel);
						ebo->sale("小张", "李四", saleModel);
					}
				}
			}
		}
	}
}