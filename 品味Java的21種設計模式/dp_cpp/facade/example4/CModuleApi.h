#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example4
				{

					class CModuleApi
					{
						//对子系统外部
					public:
						virtual public void c1() = 0;
						//子系统内部使用
						virtual public void c2() = 0;
						//子系统内部使用
						virtual public void c3() = 0;
					};

				}
			}
		}
	}
}