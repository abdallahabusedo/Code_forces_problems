#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sure(0);
	int P(0);
	int V(0);
	int T(0);
	for (int i = 0; i < n; i++)
	{
		cin >> P >> V >> T;
		if ((P + V + T) > 1)
		{
			sure++;
		}
	}
	cout << sure;
	cout << endl;

	return 0;
}