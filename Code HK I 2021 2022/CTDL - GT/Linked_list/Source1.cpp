#include<iostream>
using namespace std;
#include<queue>

int main()
{
	queue<int> q;
	for (int i = 15; i <= 20; i++)
	{
		q.push(i);
	}
	q.pop();
	cout << q.back() << endl;
	cout << q.front();
	//cout << q.empty() << endl;
	//cout << q.size();
	cout << endl;
	system("pause");
	return 0;
}