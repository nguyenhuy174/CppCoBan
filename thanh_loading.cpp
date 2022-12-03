#include <iostream>
#include <windows.h>

void loading()
{
	system("cls");
	char a = 219;
	std::cout << "\t\t\t\t\tLoading ...\n";
	std::cout << "\t\t\t\t";
	for (int i = 0; i < 25; i++)
	{
		std::cout << a;
		Sleep(100);
	}
	//std::cout << "\t";
	//std::cout << "\t\t\t\t";
	//for (int i = 0; i < 26; i++)
	//{
	//	std::cout << b;
	//	Sleep(100);
	//}
	std::cout << std::endl;
	system("pause");
}

int main()
{
	loading();
	return 0;
}