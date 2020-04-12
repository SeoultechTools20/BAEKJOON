#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	int  n, f0 = 0, f1 = 1; 

	cin >> n;

	vector <long long int> v;

	v.push_back(0);
	v.push_back(1);
		
	if (n == 0)
	{
		cout << f0;
	}
	else if (n == 1)
	{
		cout << f1;
	}
	else
	{
		for (int i = 2; i <= n; i++) 
		{
			v.push_back( v[i-1] + v[i-2]);
		}
		cout << v.back();
	}
}