#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Head.h"

//CLASS SUPPORT//
Support::Support() {};

Support::Support(std::string &NameUser, std::string &FormalAppeal) : m_NameUser(NameUser),
m_FormalAppeal(FormalAppeal) {}

Support::~Support() {}

std::string Support::GetNameUser() const {return Support::m_NameUser;};
void Support::SetNameUser(std::string &NameUser) { Support::m_NameUser = NameUser; }

std::string Support::GetFormalAppeal() const { return Support::m_FormalAppeal; }
void Support::SetFormalAppeal(std::string &FormalAppeal) { Support::m_FormalAppeal = FormalAppeal; }

std::string Support::ReadWordsUser(const int SIZE, char Arr [])
{
	for (int i = 0; i < SIZE; i++)
	{
		
	}
}

void Support::SpeakToSupport()
{
	const int MAXWORDSUSER = 200;
	char WordsUser [MAXWORDSUSER];

	//Добавить выход из цикла при помощи определенного действия
	do
	{
		std::cin.get(WordsUser, MAXWORDSUSER, '.');
		std::cout << WordsUser << '.';

		ReadWordsUser(MAXWORDSUSER, WordsUser);

	} while (true);

}


