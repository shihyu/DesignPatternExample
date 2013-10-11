#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example10
				{

					class Singleton
					{
					///	
					///	 <summary> * 对保存实例的变量添加volatile的修饰 </summary>
					///	 
					private:
						volatile static Singleton instance;
						Singleton();
					public:
						static Singleton getInstance();
					};


				}
			}
		}
	}
}