#pragma once

#include "AbstractCommand.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example4
				{

					class SubstractCommand : public AbstractCommand
					{

					private:
						int opeNum;
					public:
						SubstractCommand(int opeNum);
						virtual void execute();

					};

				}
			}
		}
	}
}