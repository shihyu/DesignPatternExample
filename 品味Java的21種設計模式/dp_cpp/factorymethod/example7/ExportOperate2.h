#pragma once

#include "ExportOperate.h"
#include "ExportFileApi.h"
#include "ExportXml.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example7
				{
					///
					/// <summary> * 扩展ExportOperate对象，加入可以导出XML文件 </summary>
					/// 
					class ExportOperate2 : public ExportOperate
					{
					///	
					///	 <summary> * 覆盖父类的工厂方法，创建导出的文件对象的接口对象 </summary>
					///	 * <param name="type"> 用户选择的导出类型 </param>
					///	 * <returns> 导出的文件对象的接口对象 </returns>
					///	 
					protected:
						virtual ExportFileApi *factoryMethod(int type);
					};

				}
			}
		}
	}
}