#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;

	char ch = s[0];
	int ans = min(abs(s[0] - 'a'), abs(26 - s[0] + 'a'));
	for (int i = 1; s[i] != '\0'; i++) {
		ans += min(abs(ch - s[i]), 26 - abs(ch - s[i]));
		ch = s[i];
	}
	cout << ans;
	//system("pause");
	return 0;

}