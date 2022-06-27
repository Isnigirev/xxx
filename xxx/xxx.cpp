#include <iostream>
#include <string>
#include "Head.h"




int main()
{
	setlocale(LC_ALL, "ru");
	
	Support	Maid("Тест", "МТест");

	if (!ReadProfile(Maid))
	{
		CreateProfile(Maid);
	}

	std::cout << Maid.GetNameUser() << " " << Maid.GetFormalAppeal();

	return 0;
}
