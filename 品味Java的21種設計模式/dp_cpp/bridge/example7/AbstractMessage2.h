#pragma once

#include "MessageImplementor.h"
#include "MessageSMS.h"
#include "MessageMobile.h"
#include "MessageEmail.h"
#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example7
				{

					///
					/// <summary> * 抽象的消息对象 </summary>
					/// 
					class AbstractMessage2
					{
					///	
					///	 <summary> * 根据消息的长度来选择合适的实现 </summary>
					///	 * <param name="message"> 要发送的消息 </param>
					///	 * <returns> 合适的实现对象 </returns>
					///	 
					protected:
						virtual MessageImplementor *getImpl(std::string message);

					///	
					///	 <summary> * 构造方法 </summary>
					///	 
					public:
						AbstractMessage2();

					///	
					///	 <summary> * 发送消息，转调实现部分的方法 </summary>
					///	 * <param name="message"> 要发送的消息内容 </param>
					///	 * <param name="toUser"> 把消息发送的目的人员 </param>
					///	 
						virtual void sendMessage(std::string message, std::string toUser);

					};

				}
			}
		}
	}
}