#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, apple, student, a = 0;
	vector <int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> student >> apple;
		v.push_back( apple % student);
		a += v[i];
	}

	cout << a;

}