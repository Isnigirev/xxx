#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "MindSupport.h"
//1. ƒобавить сохранение слов с исправлени€ми (чтоб пользователь сам мог поправить помошника),
//2. ƒобавить возможность писать длинный текст в стринг

//CLASS Intelligence//


Intelligence::Intelligence()
{
	Intelligence::m_MemoriKeyWords.reserve(5);
	Intelligence::m_MemoriKeyWords.push_back("IntelligenceKeyWords");

	Intelligence::m_MemoriUserWords.reserve(10);
};

Intelligence::~Intelligence()
{
	Intelligence::m_MemoriKeyWords.~vector();

	Intelligence::m_MemoriUserWords.~vector();
};

void Intelligence::ReadWordsUser(std::vector <std::string>& FlowWordUser)
{
	//Ѕлок выбирает ключевые слова дл€ добавление их в ловарь и в пам€ть помошника

	for (int i = 0; i < FlowWordUser.size(); i++)
	{
		if (FlowWordUser[i] == "Ћень" || FlowWordUser[i] == "лень")
		{
			//Support::m_MemoriKeyWords.push_back(FlowWordUser[i]);
		}
	}

	//Support::m_MemoriUserWords.assign(FlowWordUser.begin(), FlowWordUser.end());

	FlowWordUser.~vector();
}


//CLASS Heart//
Heart::Heart()
{
	Heart::m_HeartKeyMemoriWords.push_back("HeartKeyWords");
}

Heart::~Heart()
{
	
}


//CLASS SUPPORT//
Support::Support() {};

Support::Support(std::string &NameUser, std::string &FormalAppeal) : m_NameUser(NameUser),
m_FormalAppeal(FormalAppeal) {}

Support::~Support() {}

std::string Support::GetNameUser() const {return Support::m_NameUser;};
void Support::SetNameUser(std::string &NameUser) { Support::m_NameUser = NameUser; }

std::string Support::GetFormalAppeal() const { return Support::m_FormalAppeal; }
void Support::SetFormalAppeal(std::string &FormalAppeal) { Support::m_FormalAppeal = FormalAppeal; }


void Support::SpeakToSupport()
{
	std::vector <std::string> FlowWordUser;
	std::string Word;
	std::string Buf;

	int i = -1;

	std::getline(std::cin, Buf, '\n');

	do
	{
		i++;

		if (Buf[Buf.size() - 1] == ' ' || Buf.empty())
		{
			FlowWordUser.push_back(Word);

			Word.clear();
		}
		else
		{
			Word += Buf[Buf.size() - 1];

			Buf.pop_back();
		}

	} while (!Buf.empty() || !Word.empty());
		
	//Support::ReadWordsUser(FlowWordUser);
}


