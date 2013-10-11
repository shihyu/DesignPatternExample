#pragma once

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example6
				{

					///
					/// <summary> * 更新数据库的方法使用的回调接口 </summary>
					/// 
					class UpdateDBCallBack
					{
					///	
					///	 <summary> * 使用PreparedStatement来给sql中的"?"传参 </summary>
					///	 * <param name="pstmt"> PreparedStatement 对象 </param>
					///	 * <exception cref="Exception"> </exception>
					///	 
					public:
						virtual public void setValue(PreparedStatement*) throw(Exception) = 0;
					};

				}
			}
		}
	}
}