#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example5
				{

					class Singleton
					{
						//4：定义一个变量来存储创建好的类实例
						//5：因为这个变量要在静态方法中使用，所以需要加上static修饰
					private:
						static Singleton instance;
						//1：私有化构造方法，好在内部控制创建实例的数目
						Singleton();
						//2：定义一个方法来为客户端提供类实例
						//3：这个方法需要定义成类方法，也就是要加static
					public:
						static Singleton getInstance();
					};

				}
			}
		}
	}
}