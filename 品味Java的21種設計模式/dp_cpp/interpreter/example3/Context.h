#pragma once

#include "XmlUtil.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example3
				{


					using org::w3c::dom::Document;
					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;
					///
					/// <summary> *	上下文，用来包含解释器需要的一些全局信息 </summary>
					/// 
					class Context
					{
					///	
					///	 <summary> * 上一个被处理的元素 </summary>
					///	 
					private:
						Element *preEle;
					///	
					///	 <summary> * Dom解析Xml的Document对象 </summary>
					///	 
						Document *document;
					///	
					///	 <summary> * 构造方法 </summary>
					///	 * <param name="filePathName"> 需要读取的xml的路径和名字 </param>
					///	 * <exception cref="Exception"> </exception>
					///	 
					public:
						Context(std::string filePathName) throw(Exception);
					///	
					///	 <summary> * 重新初始化上下文 </summary>
					///	 
						virtual void reInit();
					///	
					///	 <summary> * 各个Expression公共使用的方法,
					///	 * 根据父元素和当前元素的名称来获取当前的元素 </summary>
					///	 * <param name="pEle"> 父元素 </param>
					///	 * <param name="eleName"> 当前元素的名称 </param>
					///	 * <returns> 找到的当前元素 </returns>
					///	 
						virtual Element *getNowEle(Element *pEle, std::string eleName);

						virtual Element *getPreEle();
						virtual void setPreEle(Element *preEle);

						virtual Document *getDocument();
					};

				}
			}
		}
	}
}