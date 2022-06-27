#include <iostream>
#include <string>
#include <fstream>
#include "Head.h"

void CreateProfile(Support &Maid)
{
	std::ofstream ProfileMake;
	ProfileMake.open("Profil.txt");

	if (!ProfileMake.is_open())
	{
		std::cout << "Ошибка, профиль не найден..." << std::endl;
	}
	else
	{
		ProfileMake << "Имя " << Maid.GetNameUser() << "\n" << "Обращение " << Maid.GetFormalAppeal();
		ProfileMake.close();
	}
}

bool ReadProfile(Support &Maid)
{
	std::ifstream ProfileOpen;
	ProfileOpen.open("Profil.txt");

	if (!ProfileOpen.is_open())
	{
		std::cout << "File not found" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Добро пожаловать " << std::endl;
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
