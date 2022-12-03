#include<iostream>
#include<fstream>
#include <windows.h>

using namespace std;

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
	cout << "\n\t\t\t\t\t  100%" << endl;
	Sleep(1200);
	//std::cout << "\t";
	//std::cout << "\t\t\t\t";
	//for (int i = 0; i < 26; i++)
	//{
	//	std::cout << b;
	//	Sleep(100);
	//}
	std::cout << std::endl;

}

void docfile(fstream& f) 
{
	char n;
	char input[10000]; // create array to store characters every time the program read file txt
	f.open("ascii-art.txt", ios::in);
	if (!f)
		cout << "Loi file!";
	else {
		int i = 0;
		while (!f.eof())
		{
			f.get(n);// read all type character
			input[i] = n;
			cout << input[i];
			//sleep(1/5);
			i++;
		}
		// this code will print a part of girl's thigh
		for(int i = 1200; i < 2620; i++) 
		{
			cout << input[i];
		}
		f.close();
	}
}

int main() 
{
	fstream f;//khai bao
	loading();
	docfile(f);
	cout << endl;
	system("pause");
	return 0;
}

/*#include <fstream>
#include<unistd.h>
#include <iostream>
#include <conio.h>
using namespace std;

void ReadFileModeOpen(char* fileName)
{
  char ch;
  char input[10000];
  fstream fsFile;
  fsFile.open(fileName, ios::in);
  if (fsFile == 0)
  {
	cout << "Cannot read file!";
  }
  else
  {
	int i = 0;
	while (!fsFile.eof())
	{
	  fsFile.get(ch);
	  input[i] = ch;
	  cout << input[i];
	  sleep(1/5);
	  i++;
	}
  }

  fsFile.close();
}


int main()
{
  ReadFileModeOpen("ascii-art.txt");
  return 0;
}*/
