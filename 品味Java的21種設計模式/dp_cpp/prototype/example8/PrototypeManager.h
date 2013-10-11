#pragma once

#include "Prototype.h"
#include <string>
#include <map>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example8
				{
					///
					/// <summary> * 原型管理器 </summary>
					/// 
					class PrototypeManager
					{
					///	
					///	 <summary> * 用来记录原型的编号和原型实例的对应关系 </summary>
					///	 
					private:
//JAVA TO C++ CONVERTER TODO TASK: Native C++ only allows initialization of static const integral fields in their declarations:
						static Map<std::string, Prototype*> *map = std::map<std::string, Prototype*>();
					///	
					///	 <summary> * 私有化构造方法，避免外部无谓的创建实例 </summary>
					///	 
						PrototypeManager();
					///	
					///	 <summary> * 向原型管理器里面添加或是修改某个原型注册 </summary>
					///	 * <param name="prototypeId"> 原型编号 </param>
					///	 * <param name="prototype"> 原型实例 </param>
					///	 
					public:
						static void setPrototype(std::string prototypeId, Prototype *prototype);
					///	
					///	 <summary> * 从原型管理器里面删除某个原型注册 </summary>
					///	 * <param name="prototypeId"> 原型编号 </param>
					///	 
						static void removePrototype(std::string prototypeId);
					///	
					///	 <summary> * 获取某个原型编号对应的原型实例 </summary>
					///	 * <param name="prototypeId"> 原型编号 </param>
					///	 * <returns> 原型编号对应的原型实例 </returns>
					///	 * <exception cref="Exception"> 如果原型编号对应的原型实例不存在，报出例外 </exception>
					///	 
						static Prototype *getPrototype(std::string prototypeId) throw(Exception);

					};

				}
			}
		}
	}
}