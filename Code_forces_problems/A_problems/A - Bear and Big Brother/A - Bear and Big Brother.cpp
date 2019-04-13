#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int year(0);
	while (x <= y)
	{
		if (x <= y)
		{
			x = x * 3;
			y = y * 2;
			year++;
		}
	}
	cout << year;
	cout << endl;
	return 0;
}