#pragma once

#include "Builder.h"
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
				namespace example3
				{


					///
					/// <summary> * 指导者，指导使用构建器的接口来构建输出的文件的对象 </summary>
					/// 
					class Director
					{
					///	
					///	 <summary> * 持有当前需要使用的构建器对象 </summary>
					///	 
					private:
						Builder *builder;
					///	
					///	 <summary> * 构造方法，传入构建器对象 </summary>
					///	 * <param name="builder"> 构建器对象 </param>
					///	 
					public:
						Director(Builder *builder);
					///	
					///	 <summary> * 指导构建器构建最终的输出的文件的对象 </summary>
					///	 * <param name="ehm"> 文件头的内容 </param>
					///	 * <param name="mapData"> 数据的内容 </param>
					///	 * <param name="efm"> 文件尾的内容 </param>
					///	 
						virtual void construct(ExportHeaderModel *ehm, Map<std::string, Collection<ExportDataModel*>*> *mapData, ExportFooterModel *efm);
					};
				}
			}
		}
	}
}