#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Head.h"


Support::Support() {m_NameHuman = "Tester";}

Support::Support(std::string NameHuman) : m_NameHuman (NameHuman) {}

std::string Support::GetNameHuman() const
{
	return m_NameHuman;
}