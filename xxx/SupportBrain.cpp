#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "MindSupport.h"
//1. Добавить сохранение слов с исправлениями (чтоб пользователь сам мог поправить помошника),
//2. Добавить возможность писать длинный текст в стринг



//CLASS SUPPORT//
Support::Support() {};

Support::Support(std::string &NameUser, std::string &FormalAppeal) : m_NameUser(NameUser),
m_FormalAppeal(FormalAppeal) {}

Support::~Support() {}

std::string Support::GetNameUser() const {return Support::m_NameUser;};
void Support::SetNameUser(std::string &NameUser) { Support::m_NameUser = NameUser; }

std::string Support::GetFormalAppeal() const { return Support::m_FormalAppeal; }
void Support::SetFormalAppeal(std::string &FormalAppeal) { Support::m_FormalAppeal = FormalAppeal; }

void Support::ReadWordsUser(const int SIZE, char Arr [])
{
	std::vector <std::string> Memori;
	
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr [i] == ' ' || Arr [i] == '.')
		{
			
		}
		else
		{
			
		}
	}


}

void Support::SpeakToSupport()
{
	char str [200];
	std::vector <std::string> FlowWordUser;
	std::string Word;
	int counter = 0;

	std::cin.get (str, 200, '.');

	do
	{
		if (str[counter] == ' ' || str[counter] == '\0')
		{
			FlowWordUser.push_back(Word);
			do
			{
				Word.pop_back();
			} while (!Word.empty());
		}
		else
		{
			Word += str[counter];
		}
		counter++;

	} while (str[counter] != '\0'); //bag
	
	

	//ReadWordsUser(WordUser);
}


