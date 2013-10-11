#pragma once

#include "ConfigModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example1
				{
					///
					/// <summary> * 示意配置管理，就是负责读取配置文件，
					/// * 并把配置文件的内容设置到配置Model中去，是个单例 </summary>
					/// 
					class ConfigManager
					{
					private:
						static ConfigManager *manager;
						static ConfigModel *cm;
						ConfigManager();
					public:
						static ConfigManager *getInstance();
					///	
					///	 <summary> * 获取配置的数据 </summary>
					///	 * <returns> 配置的数据 </returns>
					///	 
						virtual ConfigModel *getConfigData();
					};

				}
			}
		}
	}
}