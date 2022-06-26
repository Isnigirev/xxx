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
		std::cout << "������, ������� �� ������..." << std::endl;
	}
	else
	{
		std::cout << "� ��� �� ����, ������� ����� �������? " << "\ny ��� n?" << std::endl;
		char cSelect = 'n';
		std::cin >> cSelect;

		if (cSelect == 'y')
		{
			std::string stCinFile;
			std::cout << "������� ���� ��������� ���" << std::endl;
			std::cin >> stCinFile;

			ProfileMake << "��� " << stCinFile << "\n";
			std::cout << "��� ��� � ��� ����������? " << std::endl;
			std::cin >> stCinFile;

			ProfileMake << "��������� " << stCinFile << "\n";
			ProfileMake.close();
			std::cout << "������� " << stCinFile << " ��� �� ������������ � �������� �� ������� �������)" << std::endl;
		}
		else
		{
			std::cout << "��, � � ������ ��� �� ����� ������(.....\n�� ����, �������� � ��������� ���)" << std::endl;
			//������� ������������ ��������� ������ ����� ��
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
		std::cout << "���-�� �� ��� ������, � �� ���� ��� ���������(" << std::endl;
	}
	else
	{
		std::cout << "����� ���������� " << std::endl;
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
