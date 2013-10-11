#include "ExportHeaderModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example1
				{

					std::string ExportHeaderModel::getDepId()
					{
						return depId;
					}

					void ExportHeaderModel::setDepId(std::string depId)
					{
						this->depId = depId;
					}

					std::string ExportHeaderModel::getExportDate()
					{
						return exportDate;
					}

					void ExportHeaderModel::setExportDate(std::string exportDate)
					{
						this->exportDate = exportDate;
					}
				}
			}
		}
	}
}
