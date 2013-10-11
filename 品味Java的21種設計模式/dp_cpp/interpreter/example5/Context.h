#pragma once

#include "XmlUtil.h"
#include <string>
#include <vector>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example5
				{


					using javax::xml::parsers::DocumentBuilder;
					using javax::xml::parsers::DocumentBuilderFactory;

					using org::w3c::dom::Document;
					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;

					///
					/// <summary> *	上下文，用来包含解释器需要的一些全局信息 </summary>
					/// 
					class Context
					{
					///	
					///	 <summary> * Dom解析Xml的Document对象 </summary>
					///	 
					private:
						Document *document;
					///	
					///	 <summary> * 上一次被处理的多个元素 </summary>
					///	 
						std::vector<Element*> preEles;
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
					///	 * 根据父元素和当前元素的名称来获取当前的多个元素的集合 </summary>
					///	 * <param name="pEle"> 父元素  </param>
					///	 * <param name="eleName"> 当前元素的名称 </param>
					///	 * <returns> 当前的多个元素的集合 </returns>
					///	 
						virtual std::vector<Element*> getNowEles(Element *pEle, std::string eleName);

						virtual Document *getDocument();
						virtual std::vector<Element*> getPreEles();
						virtual void setPreEles(std::vector<Element*> &nowEles);

					private:
						bool initialized;
						void InitializeInstanceFields()
						{
							if ( ! initialized)
							{
								preEles = std::vector<Element*>();

								initialized = true;
							}
						}
					};

				}
			}
		}
	}
}