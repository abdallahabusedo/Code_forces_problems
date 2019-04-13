#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int count = 0;

	int n = 0;
	cin >> n;
	string arr;
	cin >> arr;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			count++;
		}
	}
	cout << count;
	return 0;
}