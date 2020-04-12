#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n, p, price, high = 0;
	string name, result;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p;
		for (int j = 0; j < p; j++)
		{
			cin.ignore();
			cin >> price >> name;
			if (high < price)
			{
				result = name;
				high = price;
			}
		}
		cout << result << endl;
		high = 0;
	}
}