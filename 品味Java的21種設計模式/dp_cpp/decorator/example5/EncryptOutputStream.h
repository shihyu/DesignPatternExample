#pragma once

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


					///
					/// <summary> * 实现简单的加密 </summary>
					/// 
					class EncryptOutputStream : public OutputStream
					{
						//持有被装饰的对象
					private:
						OutputStream *os;
					public:
						EncryptOutputStream(OutputStream *os);

						virtual void write(int a) throw(IOException);
					};

				}
			}
		}
	}
}