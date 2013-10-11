#pragma once

#include <string>

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example4
				{

					class RecursiveTest
					{
					///	
					///	 <summary> * 示意递归算法，求阶乘。这里只是简单的实现，只能实现求数值较小的阶乘，
					///	 * 对于数据比较大的阶乘，比如求100的阶乘应该采用java.math.BigDecimal
					///	 * 或是java.math.BigInteger </summary>
					///	 * <param name="a"> 求阶乘的数值 </param>
					///	 * <returns> 该数值的阶乘值 </returns>
					///	 
					public:
						virtual int recursive(int a);

						static void main(std::string args[]);
					};

				}
			}
		}
	}
}