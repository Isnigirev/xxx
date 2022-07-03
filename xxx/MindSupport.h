#pragma once
#include <vector>

class Intelligence
{
	int m_loyalty;	//% loal to user

	std::vector <std::string> m_MemoriKeyWords;
	std::vector <std::string> m_MemoriUserWords;

public:
	Intelligence();

	~Intelligence();

	void ReadWordsUser(std::vector <std::string>& FlowWordUser);

};


class Heart
{
	int sympathy;	//% loal to user

	std::vector <std::string> m_HeartKeyMemoriWords;

public:
	Heart();

	~Heart();






};

class Support : public Heart, Intelligence
{
	std::string m_NameUser;
	std::string m_FormalAppeal;

public:
	Support();
	Support(std::string &NameUser, std::string &FormalAppeal);

	~Support();

	std::string GetNameUser() const;
	void SetNameUser(std::string &NameUser);

	std::string GetFormalAppeal() const;
	void SetFormalAppeal(std::string &FormalAppeal);

	void SpeakToSupport();
};

void CreateProfile(Support& support);

bool ReadProfile(Support& support);
