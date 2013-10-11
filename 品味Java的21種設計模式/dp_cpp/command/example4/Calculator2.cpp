#include "Calculator2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example4
				{

					void Calculator2::setAddCmd(Command *addCmd)
					{
						this->addCmd = addCmd;
					}

					void Calculator2::setSubstractCmd(Command *substractCmd)
					{
						this->substractCmd = substractCmd;
					}

					void Calculator2::addPressed()
					{
						this->addCmd->execute();
					}

					void Calculator2::substractPressed()
					{
						this->substractCmd->execute();
					}
				}
			}
		}
	}
}
