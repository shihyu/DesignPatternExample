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
					class EncryptOutputStream2 : public java::io::FilterOutputStream
					{
					public:
						EncryptOutputStream2(OutputStream *os);

						virtual void write(int a) throw(IOException);
					};

				}
			}
		}
	}
}