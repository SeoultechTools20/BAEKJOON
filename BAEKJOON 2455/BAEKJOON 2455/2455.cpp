#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int in, out, ans = 0, max = 0;
	vector <int> v;
	for (int i = 0; i < 4; i++)
	{
		cin >> out >> in;
		ans -= out;
		ans += in;
		v.push_back(ans);
	}
	max = v[0];

	for (int i = 0; i < 4; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
	cout << max << endl;
}