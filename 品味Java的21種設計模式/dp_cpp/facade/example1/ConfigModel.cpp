#include "ConfigModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example1
				{

					bool ConfigModel::isNeedGenPresentation()
					{
						return needGenPresentation;
					}

					void ConfigModel::setNeedGenPresentation(bool needGenPresentation)
					{
						this->needGenPresentation = needGenPresentation;
					}

					bool ConfigModel::isNeedGenBusiness()
					{
						return needGenBusiness;
					}

					void ConfigModel::setNeedGenBusiness(bool needGenBusiness)
					{
						this->needGenBusiness = needGenBusiness;
					}

					bool ConfigModel::isNeedGenDAO()
					{
						return needGenDAO;
					}

					void ConfigModel::setNeedGenDAO(bool needGenDAO)
					{
						this->needGenDAO = needGenDAO;
					}
				}
			}
		}
	}
}