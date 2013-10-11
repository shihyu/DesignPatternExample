#pragma once

#include "ExportFileApi.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example3
				{
					///
					/// <summary> * 实现导出数据的业务功能对象 </summary>
					/// 
					class ExportOperate
					{
					///	
					///	 <summary> * 导出文件 </summary>
					///	 * <param name="data"> 需要保存的数据 </param>
					///	 * <returns> 是否成功导出文件 </returns>
					///	 
					public:
						virtual bool export(std::string data);
					///	
					///	 <summary> * 工厂方法，创建导出的文件对象的接口对象 </summary>
					///	 * <returns> 导出的文件对象的接口对象 </returns>
					///	 
					protected:
						virtual ExportFileApi *factoryMethod() = 0;
					};

				}
			}
		}
	}
}