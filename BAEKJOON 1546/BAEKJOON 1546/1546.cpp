#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	double n,m=0,score, fix, ans=0, average ;
	vector <double> v1;
	vector <double> v2;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> score;
		v1.push_back(score);
		if (m < score)
		{
			m = score;
		}
	}
	for (int i = 0; i < n; i++)
	{

		fix = v1[i] / m * 100;
		v2.push_back(fix);
	}
	
	for (int i = 0; i < n; i++)
	{
		ans += v2[i];
	}

	average = ans / n;


	cout << average;
}