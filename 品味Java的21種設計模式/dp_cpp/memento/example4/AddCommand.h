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

					class AddCommand : public AbstractCommand
					{

					private:
						int opeNum;
					public:
						AddCommand(int opeNum);

						virtual void execute();
					};

				}
			}
		}
	}
}