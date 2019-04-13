#include <iostream>
using namespace std;
int main()
{
	int n;
	int h;
	cin >> n >> h;
	int arr[n];
	int width = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] <= h)
		{
			width++;
		}
		else width = width + 2;
	}
	cout << width;
	cout << endl;
	return  0;

}