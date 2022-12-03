#include <iostream>
#include <fstream>

using namespace std;
// kiem tra file da ton tai hay chua
bool checkfile(char filename[]) {
	fstream f(filename);
	return f.good();
}
int main() {
	
	cout << checkfile("hocsinh1.txt");
	system("pause");
	return 0;
	
}
