#pragma once

class Support
{
	std::string m_NameUser;
	std::string m_FormalAppeal;

	std::string ReadWordsUser(const int SIZE, char Arr[]);

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
