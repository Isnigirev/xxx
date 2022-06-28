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

//CLASS SUPPORT//

void brain()
{
	std::vector <std::string> vSpeak;
	std::string stSpeack;
	std::cin >> stSpeack;
	; // ¬вод слов в стек


}


