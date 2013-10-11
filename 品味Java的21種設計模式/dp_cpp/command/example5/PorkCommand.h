#pragma once

#include "Command.h"
#include "CookApi.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example5
				{

					///
					/// <summary> * √¸¡Ó∂‘œÛ£¨À‚ƒ‡∞◊»‚ </summary>
					/// 
					class PorkCommand : public Command
					{
					private:
						CookApi *cookApi;

					public:
						virtual void setCookApi(CookApi *cookApi);


						virtual void execute();
					};
				}
			}
		}
	}
}