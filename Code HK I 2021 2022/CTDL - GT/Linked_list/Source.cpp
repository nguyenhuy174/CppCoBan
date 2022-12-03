#include<iostream>
using namespace std;
#include<stack>
 
int main()
{
	stack<int> s;
	//cout << s.empty() << endl;
	//cout << s.size() << endl;
	//s.push(5);
	//s.push(10);
	//cout << s.empty() << endl;
	for (int i = 15; i <= 20; i++)
		s.push(i);
	s.pop();
	cout << s.top();

	cout << endl;
	system("pause");
	return 0;
}