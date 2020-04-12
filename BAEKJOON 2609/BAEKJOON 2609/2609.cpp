#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n1, n2, gcd, lcm, k;

	cin >> n1 >> n2;

	k = min(n1, n2);

	for (int i = 1; i <= k; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}

	lcm = (n1 * n2) / gcd;

	cout << gcd << endl << lcm;
}