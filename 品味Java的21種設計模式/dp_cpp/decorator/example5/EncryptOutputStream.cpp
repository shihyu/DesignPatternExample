#include "EncryptOutputStream.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example5
				{

					EncryptOutputStream::EncryptOutputStream(OutputStream *os)
					{
						this->os = os;
					}

					void EncryptOutputStream::write(int a) throw(IOException)
					{
						//先统一向后移动两位
						a = a+2;
						//97是小写的a的码值
						if(a >= (97+26))
						{
							//如果大于，表示已经是y或者z了，减去26就回到a或者b了
							a = a-26;
						}
						this->os->write(a);
					}
				}
			}
		}
	}
}
