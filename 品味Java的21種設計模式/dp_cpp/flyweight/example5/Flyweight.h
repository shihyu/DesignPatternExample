#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example5
				{


					///<summary> *
					/// * 描述授权数据的享元接口 </summary>
					/// 
					class Flyweight
					{
					///	
					///	 <summary> * 判断传入的安全实体和权限，是否和享元对象内部状态匹配 </summary>
					///	 * <param name="securityEntity"> 安全实体 </param>
					///	 * <param name="permit"> 权限 </param>
					///	 * <returns> true表示匹配，false表示不匹配 </returns>
					///	 
					public:
						virtual public bool match(std::string, std::string) = 0;
					///	
					///	 <summary> * 为flyweight添加子flyweight对象 </summary>
					///	 * <param name="f"> 被添加的子flyweight对象 </param>
					///	 
						virtual public void add(Flyweight*) = 0;
					};
				}
			}
		}
	}
}