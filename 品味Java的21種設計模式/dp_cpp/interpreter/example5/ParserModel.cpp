#include "ParserModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example5
				{

					bool ParserModel::isEnd()
					{
						return end;
					}

					void ParserModel::setEnd(bool end)
					{
						this->end = end;
					}

					bool ParserModel::isSingleVlaue()
					{
						return singleVlaue;
					}

					void ParserModel::setSingleVlaue(bool oneVlaue)
					{
						this->singleVlaue = oneVlaue;
					}

					bool ParserModel::isPropertyValue()
					{
						return propertyValue;
					}

					void ParserModel::setPropertyValue(bool propertyValue)
					{
						this->propertyValue = propertyValue;
					}
				}
			}
		}
	}
}