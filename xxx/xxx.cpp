#include <iostream>
#include <string>
#include <fstream>
#define DEBUG

//Создать программу с ии Помошник виндовс, который будет анализировать ежедневную деятельнось
//польхователя и предлогать свои варианты в зависимлсти от времяни суток.

#ifdef DEBUG
string stProfil[3]{ "Main","DEBUG" };
#endif // DEBUG

using namespace std;
//Создание профиля

void EnterProfil()
{
	ofstream ProfileMake;

	ProfileMake.open("Profil.txt");

	if (!ProfileMake.is_open())
	{
		cout << "Ошибка, профиль не найден..." << endl;
	}
	else
	{
		cout << "Я Вас не знаю, создать новый профиль? " << "\ny или n?" << endl;

		char cSelect = 'n';

		cin >> cSelect;

		if (cSelect == 'y')
		{
			string stCinFile;

			cout << "Скажите Ваше настоящее имя" << endl;
			cin >> stCinFile;

			ProfileMake << "Имя " << stCinFile << "\n";

			cout << "Как мне к Вам обращаться? " << endl;
			cin >> stCinFile;

			ProfileMake << "Обращение " << stCinFile << "\n";

			ProfileMake.close();

			cout << "Спасибо " << stCinFile << " что не постеснялись и ответили на вводные вопросы)" << endl;
		}
		else
		{
			cout << "Эх, а я думала что Вы новый мастер(.....\nНу чтож, увидимся в следующий раз)" << endl;
			//Сделать отслеживание включений именно этого ПК
			return;
		}
	}

	return;
}

//Подружить стринг с Русским

bool FileGetandOpen(string stProfil[])
{
	ifstream ProfileOpen;

	ProfileOpen.open("Profil.txt");

	if (!ProfileOpen.is_open())
	{
		cout << "Что-то не так мастер, я не знаю что произошло(" << endl;
	}
	else
	{
		cout << "Добро пожаловать " << endl;

		string str;

		int iIgnor = 1;

		while (!ProfileOpen.eof())
		{
			ProfileOpen >> str;

			if (iIgnor == 2)
			{
				stProfil[1] = str;
			}
			else if (iIgnor == 4)
			{
				stProfil[2] = str;

				return true;
			}

			iIgnor++;
		}

		ProfileOpen.close();
	}
}

void brain()
{
	



}

int main()
{
	setlocale(LC_ALL, "ru");

	/*string stProfil[3]{"one","two"};
	
	if (FileGetandOpen(stProfil) == true)
	{ 
		cout << stProfil[1] << "\t" << stProfil[2];
	}
	else
	{
		EnterProfil();
	}*/
	
	brain();

	return 0;
}
