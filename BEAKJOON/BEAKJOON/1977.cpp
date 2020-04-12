#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int m, n, dogh = 0, ans = 0, min = 0;
	vector <int> perfect;

	cin >> m >> n;

	for (int i = 0; i <= 100; i++)
	{
		if (i * i >= m && i * i <= n)
		{
			dogh = i * i;
			perfect.push_back(dogh);
		}
	}
	if (dogh == 0)
	{
		cout << -1;

	}
	else
	{
		for (int i = 0; i < perfect.size(); i++)
		{
			ans += perfect[i];
		}

		min = perfect.front();

		cout << ans << endl;
		cout << min << endl;
	}
}