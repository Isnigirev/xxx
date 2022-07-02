#pragma once
#include <vector>

class Heart
{
	std::vector <std::string> m_MemoriKeyWords;
	std::vector <std::string> m_MemoriUserWords;

public:
	Heart();
	~Heart();






};










class Support : public Heart
{
	std::string m_NameUser;
	std::string m_FormalAppeal;

	void ReadWordsUser(std::vector <std::string> &FlowWordUser);

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
