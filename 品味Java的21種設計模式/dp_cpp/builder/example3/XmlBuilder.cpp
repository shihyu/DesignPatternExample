#include "XmlBuilder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example3
				{

					void XmlBuilder::buildBody(Map<std::string, Collection<ExportDataModel*>*> *mapData)
					{
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
					}

					void XmlBuilder::buildFooter(ExportFooterModel *efm)
					{
						buffer->append("  <Footer>\n");
						buffer->append("    <ExportUser>"+efm->getExportUser()+"</ExportUser>\n");
						buffer->append("  </Footer>\n");
						buffer->append("</Report>\n");
					}

					void XmlBuilder::buildHeader(ExportHeaderModel *ehm)
					{
						buffer->append("<?xml version='1.0' encoding='gb2312'?>\n");
						buffer->append("<Report>\n");
						buffer->append("  <Header>\n");
						buffer->append("    <DepId>"+ehm->getDepId()+"</DepId>\n");
						buffer->append("    <ExportDate>"+ehm->getExportDate()+"</ExportDate>\n");
						buffer->append("  </Header>\n");
					}

					StringBuffer *XmlBuilder::getResult()
					{
						return buffer;
					}
				}
			}
		}
	}
}