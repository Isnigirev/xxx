#include <iostream>
#include <string>
#include <fstream>
#include "MindSupport.h"

//Записывает в файл профиля данные введенные пользователем
//Сделать в виде ООП, чтоб можно было записывать и считывать ключевые слова и процее
void CreateProfile(Support &Maid)
{
	std::ofstream ProfileMake;
	ProfileMake.open("Profil.txt");

	if (!ProfileMake.is_open())
	{
		std::cout << "Error, file not found..." << std::endl;
	}
	else
	{
		std::string EnterNameAndAppeal;
		std::cout << "Enter Name: \n";
		std::cin >> EnterNameAndAppeal;
		Maid.SetNameUser(EnterNameAndAppeal);

		std::cout << "Enter Appeal: \n";
		std::cin >> EnterNameAndAppeal;
		Maid.SetFormalAppeal(EnterNameAndAppeal);

		ProfileMake << Maid.GetNameUser() << "\t" << Maid.GetFormalAppeal();
		ProfileMake.close();
	}
}
//считывает данные ранее сохраненные в профиль
bool ReadProfile(Support &Maid)
{
	std::ifstream ProfileOpen;
	ProfileOpen.open("Profil.txt");

	if (!ProfileOpen.is_open())
	{
		std::cout << "File not found" << std::endl;
		CreateProfile(Maid);
	}
	else
	{
		std::string str;
		int iIgnor = 0;

		while (!ProfileOpen.eof())
		{
			ProfileOpen >> str;

			if (iIgnor == 0)
			{
				Maid.SetNameUser(str);
			}
			else
			{
				Maid.SetFormalAppeal(str);
			}

			iIgnor++;
		}

		ProfileOpen.close();
	}

	return 0;
}

void OpenFileMemori(std::vector <std::string> &Memori, int &loal)
{

	std::string NameFile = Memori[0];


	std::ifstream ProfileOpen;
	ProfileOpen.open("Profil.txt");

	if (!ProfileOpen.is_open())
	{
		std::cout << "File not found" << std::endl;
	}
	else
	{
		std::string str;
		int iIgnor = 0;

		while (!ProfileOpen.eof())
		{
			ProfileOpen >> str;
		}

		ProfileOpen.close();
	}
}