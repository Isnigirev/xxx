#include <iostream>
#include <string>
#include "MindSupport.h"

int main()
{
	setlocale(LC_ALL, "russian");
	system("chcp 1251");
	
	Support	Maid;
	ReadProfile(Maid);

	
	std::cout << "Wellcome! " << Maid.GetFormalAppeal() << ' ' << Maid.GetNameUser() << std::endl;

	Maid.SpeakToSupport();

	return 0;
}
