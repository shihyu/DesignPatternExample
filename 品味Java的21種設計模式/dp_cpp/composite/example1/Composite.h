#pragma once

#include "Leaf.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example1
				{

					///
					/// <summary> * 组合对象，可以包含其它组合对象或者叶子对象 </summary>
					/// 
					class Composite
					{
					///	
					///	 <summary> * 用来记录包含的其它组合对象 </summary>
					///	 
					private:
						Collection<Composite*> *childComposite;
					///	
					///	 <summary> * 用来记录包含的其它叶子对象 </summary>
					///	 
						Collection<Leaf*> *childLeaf;
					///	
					///	 <summary> * 组合对象的名字 </summary>
					///	 
						std::string name;
					///	
					///	 <summary> * 构造方法，传入组合对象的名字 </summary>
					///	 * <param name="name"> 组合对象的名字 </param>
					///	 
					public:
						Composite(std::string name);
					///	
					///	 <summary> * 向组合对象加入被它包含的其它组合对象 </summary>
					///	 * <param name="c"> 被它包含的其它组合对象 </param>
					///	 
						virtual void addComposite(Composite *c);
					///	
					///	 <summary> * 向组合对象加入被它包含的叶子对象 </summary>
					///	 * <param name="leaf"> 被它包含的叶子对象 </param>
					///	 
						virtual void addLeaf(Leaf *leaf);
					///	
					///	 <summary> * 输出组合对象自身的结构 </summary>
					///	 * <param name="preStr"> 前缀，主要是按照层级拼接的空格，实现向后缩进 </param>
					///	 
						virtual void printStruct(std::string preStr);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								childComposite = std::vector<Composite*>();
								childLeaf = std::vector<Leaf*>();
								name = "";

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}