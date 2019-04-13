#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string s;
	cin >> s;
	int len = s.length();
	int total = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '1')
		{
			total =total+a;
		}
		else if (s[i] == '2')
		{
			total = total + b;
		}
		else if(s[i] == '3')
		{
			total = total + c;
		}
		else if (s[i]== '4')
		{
			total = total + d;
		}
	}
	cout << total;
	//system("pause");
	return 0;

}