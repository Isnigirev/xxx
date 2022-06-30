#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "MindSupport.h"

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
	for (int i = 0; i < SIZE; i++)
	{
		
	}


}

void Support::SpeakToSupport()
{
	const int MAXWORDSUSER = 200;
	char WordsUser [MAXWORDSUSER];

	//ƒобавить выход из цикла при помощи определенного действи€
	do
	{
		std::cin.get(WordsUser, MAXWORDSUSER, '.');
		std::cout << WordsUser << '.';

		//ReadWordsUser(MAXWORDSUSER, WordsUser);

		std::cout << "Next yes or not[ex]? \n";

	} while (!std::cin.get(WordsUser, MAXWORDSUSER, 'ex')); //Ѕаг, переделать

}


