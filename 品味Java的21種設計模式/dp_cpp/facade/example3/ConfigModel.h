#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example3
				{
					///
					/// <summary> * 示意配置描述的数据Model，真实的配置数据会很多 </summary>
					/// 
					class ConfigModel
					{
					///	
					///	 <summary> * 是否需要生成表现层，默认是true </summary>
					///	 
					private:
						bool needGenPresentation;
					///	
					///	 <summary> * 是否需要生成逻辑层，默认是true </summary>
					///	 
						bool needGenBusiness;
					///	
					///	 <summary> * 是否需要生成DAO，默认是true </summary>
					///	 
						bool needGenDAO;
					public:
						virtual bool isNeedGenPresentation();
						virtual void setNeedGenPresentation(bool needGenPresentation);
						virtual bool isNeedGenBusiness();
						virtual void setNeedGenBusiness(bool needGenBusiness);
						virtual bool isNeedGenDAO();
						virtual void setNeedGenDAO(bool needGenDAO);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								needGenPresentation = true;
								needGenBusiness = true;
								needGenDAO = true;

								initialized = true;
							}
						}

public:
	ConfigModel()
	{
		InitializeInstanceFields();
	}
					};

				}
			}
		}
	}
}