#include "ExportToXml.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example1
				{

					void ExportToXml::export(ExportHeaderModel *ehm, Map<std::string, Collection<ExportDataModel*>*> *mapData, ExportFooterModel *efm)
					{
						//用来记录最终输出的文件内容
						StringBuffer *buffer = new StringBuffer();
						//1：先来拼接文件头的内容
						buffer->append("<?xml version='1.0' encoding='gb2312'?>\n");
						buffer->append("<Report>\n");
						buffer->append("  <Header>\n");
						buffer->append("    <DepId>"+ehm->getDepId()+"</DepId>\n");
						buffer->append("    <ExportDate>"+ehm->getExportDate()+"</ExportDate>\n");
						buffer->append("  </Header>\n");
						//2：接着来拼接文件体的内容
						buffer->append("  <Body>\n");
						for (Map<std::string, Collection<ExportDataModel*>*>::const_iterator tblName = mapData->begin(); tblName != mapData->end(); ++tblName)
						{
							//先拼接表名称
							buffer->append("    <Datas TableName=\""+tblName->first+"\">\n");
							//然后循环拼接具体数据
							for (unknown::const_iterator edm = mapData->get(tblName).begin(); edm != mapData->get(tblName).end(); ++edm)
							{
								buffer->append("      <Data>\n");
								buffer->append("        <ProductId>"+(*edm)->getProductId()+"</ProductId>\n");
								buffer->append("        <Price>"+(*edm)->getPrice()+"</Price>\n");
								buffer->append("        <Amount>"+(*edm)->getAmount()+"</Amount>\n");
								buffer->append("      </Data>\n");
							}
							buffer->append("    </Datas>\n");
						}
						buffer->append("  </Body>\n");
						//3：接着来拼接文件尾的内容
						buffer->append("  <Footer>\n");
						buffer->append("    <ExportUser>"+efm->getExportUser()+"</ExportUser>\n");
						buffer->append("  </Footer>\n");
						buffer->append("</Report>\n");

						//为了演示简洁性，这里就不去写输出文件的代码了
						//把要输出的内容输出到控制台看看
						puts("输出到XML文件的内容：\n"+buffer);
					}
				}
			}
		}
	}
}