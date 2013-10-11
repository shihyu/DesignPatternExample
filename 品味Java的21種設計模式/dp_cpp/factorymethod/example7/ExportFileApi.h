#pragma once

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
					/// <summary> * 导出的文件对象的接口 </summary>
					/// 
					class ExportFileApi
					{
					///	
					///	 <summary> * 导出内容成为文件 </summary>
					///	 * <param name="data"> 示意：需要保存的数据 </param>
					///	 * <returns> 是否导出成功 </returns>
					///	 
					public:
						virtual public bool export(std::string) = 0;
					};

				}
			}
		}
	}
}