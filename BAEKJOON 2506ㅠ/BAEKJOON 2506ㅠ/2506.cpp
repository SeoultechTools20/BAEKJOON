#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ox, score = 0, ans = 0;
	vector <int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ox;

		if (ox == 1)
		{
			score += 1;
		}
		else
		{
			score = 0;
		}

		ans += score;
	}
	cout << ans;
}