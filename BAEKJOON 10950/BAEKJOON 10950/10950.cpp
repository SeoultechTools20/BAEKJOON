#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
	int t, a,b; 
	cin >> t;
	vector <int> v;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		v.push_back(a + b);
	}
	for (int i = 0; i < t; i++)
	{
		cout << v[i] << endl; 
	}
}