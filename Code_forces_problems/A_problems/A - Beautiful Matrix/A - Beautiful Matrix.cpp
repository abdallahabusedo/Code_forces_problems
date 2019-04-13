#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x = 0;
	int row = 0; int col = 0;
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			cin >> x;
			if (x == 1)
			{
				row = i;
				col = j;
				break;
			}
		}
	}
	cout << (abs(row - 3) + abs(col - 3)) << endl;
	return 0;
}