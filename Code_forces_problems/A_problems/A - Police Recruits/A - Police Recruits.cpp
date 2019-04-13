#include <iostream>

using namespace std;

int main()
{
	int n, c = 0, p = 0, event;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> event;
		if (event > 0) {
			p += event;
		}
		else if (p != 0) {
			p--;
		}
		else {
			c++;
		}
	}
	cout << c << endl;
	return 0;
}