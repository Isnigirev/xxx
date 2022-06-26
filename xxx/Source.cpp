#include <iostream>
#include <string>
#include <fstream>
#include "Head.h"

void EnterProfil()
{
	std::ofstream ProfileMake;
	ProfileMake.open("Profil.txt");

	if (!ProfileMake.is_open())
	{
		std::cout << "Ошибка, профиль не найден..." << std::endl;
	}
	else
	{
		std::cout << "Я Вас не знаю, создать новый профиль? " << "\ny или n?" << std::endl;
		char cSelect = 'n';
		std::cin >> cSelect;

		if (cSelect == 'y')
		{
			std::string stCinFile;
			std::cout << "Скажите Ваше настоящее имя" << std::endl;
			std::cin >> stCinFile;

			ProfileMake << "Имя " << stCinFile << "\n";
			std::cout << "Как мне к Вам обращаться? " << std::endl;
			std::cin >> stCinFile;

			ProfileMake << "Обращение " << stCinFile << "\n";
			ProfileMake.close();
			std::cout << "Спасибо " << stCinFile << " что не постеснялись и ответили на вводные вопросы)" << std::endl;
		}
		else
		{
			std::cout << "Эх, а я думала что Вы новый мастер(.....\nНу чтож, увидимся в следующий раз)" << std::endl;
			//Сделать отслеживание включений именно этого ПК
			return;
		}
	}
	return;
}

bool FileGetandOpen(Support Maid)
{
	std::ifstream ProfileOpen;
	ProfileOpen.open("Profil.txt");

	if (!ProfileOpen.is_open())
	{
		std::cout << "Что-то не так мастер, я не знаю что произошло(" << std::endl;
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
