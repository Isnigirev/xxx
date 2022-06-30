#include <iostream>
#include <string>
#include <fstream>
#include "MindSupport.h"

//Записывает в файл профиля данные введенные пользователем
void CreateProfile(Support &Maid)
{
	system("chcp 1251");

	std::ofstream ProfileMake;
	ProfileMake.open("Profil.txt");

	if (!ProfileMake.is_open())
	{
		std::cout << "Error, file not found..." << std::endl;
	}
	else
	{
		ProfileMake << "Name " << Maid.GetNameUser() << "\n" << "Appeal " << Maid.GetFormalAppeal() << "\n";
		ProfileMake.close();
	}
}
//считывает данные ранее сохраненные в профиль
bool ReadProfile(Support &Maid)
{
	//system("chcp 1251");

	std::ifstream ProfileOpen;
	ProfileOpen.open("Profil.txt");

	if (!ProfileOpen.is_open())
	{
		std::cout << "File not found" << std::endl;
		return 0;
	}
	else
	{
		std::string str;
		int iIgnor = 1;

		while (!ProfileOpen.eof())
		{
			ProfileOpen >> str;

			if (iIgnor == 2)
			{
				Maid.SetNameUser(str);
			}
			else if (iIgnor == 4)
			{
				Maid.SetFormalAppeal(str);
				return true;
			}

			iIgnor++;
		}
		
		ProfileOpen.close();
	}
}
