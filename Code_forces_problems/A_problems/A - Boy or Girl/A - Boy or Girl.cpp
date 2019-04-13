#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string s1;
	cin >> s1;
	sort(s1.begin(), s1.end());
	int d = 0;

	int c1 = s1.length();
	for (int i = 0; i < c1; i++)
	{
		if (s1[i] == s1[i + 1])
		{
			d++;
		}

	}

	if ((abs(d - c1)) % 2 != 0)
	{
		cout << "IGNORE HIM!";
	}
	else cout << "CHAT WITH HER!";

	return 0;
}