#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a, b;
	vector <int> v;
	cin >> a >> b;

	while (a != 0 && b != 0)
	{
		cout << a + b << endl;
		cin >> a >> b;
	}
}