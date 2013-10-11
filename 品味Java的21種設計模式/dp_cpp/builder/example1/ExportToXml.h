#pragma once

#include "ExportDataModel.h"
#include "ExportFooterModel.h"
#include "ExportHeaderModel.h"
#include <string>

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

					///
					/// <summary> * 导出数据到XML文件的对象 </summary>
					/// 
					class ExportToXml
					{
					///	
					///	 <summary> * 导出数据到XML文件 </summary>
					///	 * <param name="ehm"> 文件头的内容 </param>
					///	 * <param name="mapData"> 数据的内容 </param>
					///	 * <param name="efm"> 文件尾的内容 </param>
					///	 
					public:
						virtual void export(ExportHeaderModel *ehm, Map<std::string, Collection<ExportDataModel*>*> *mapData, ExportFooterModel *efm);
					};

				}
			}
		}
	}
}