#pragma once

class Support
{
	std::string m_NameUser;
	std::string m_FormalAppeal;

public:
	Support(std::string &NameUser, std::string &FormalAppeal) : m_NameUser(NameUser), 
			m_FormalAppeal(FormalAppeal) {}

	std::string GetNameUser() const { return m_NameUser; }
	void SetNameUser(std::string &NameUser) const {m_NameUser + NameUser; }

	std::string GetFormalAppeal() const { return m_FormalAppeal; }
	void SetFormalAppeal(std::string& FormalAppeal) const {m_FormalAppeal + FormalAppeal; }


};

