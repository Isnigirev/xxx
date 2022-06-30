#include <iostream>
#include <string>
#include "MindSupport.h"

int main()
{
	setlocale(LC_ALL, "russian");
	system("chcp 1251");
	
	Support	Maid;

	if (!ReadProfile(Maid))
	{
		std::string EnterNameAndAppeal;
		std::cout << "Enter Name: \n";
		std::cin >> EnterNameAndAppeal;
		Maid.SetNameUser(EnterNameAndAppeal);

		std::cout << "Enter Appeal: \n";
		std::cin >> EnterNameAndAppeal;
		Maid.SetFormalAppeal(EnterNameAndAppeal);
		
		CreateProfile(Maid);
	}
	
	std::cout << "Wellcome! " << Maid.GetFormalAppeal() << ' ' << Maid.GetNameUser() << std::endl;

	Maid.SpeakToSupport();

	return 0;
}
