#include "NormalLoginModel.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example4
				{

					std::string NormalLoginModel::getQuestion()
					{
						return question;
					}

					void NormalLoginModel::setQuestion(std::string question)
					{
						this->question = question;
					}

					std::string NormalLoginModel::getAnswer()
					{
						return answer;
					}

					void NormalLoginModel::setAnswer(std::string answer)
					{
						this->answer = answer;
					}
				}
			}
		}
	}
}