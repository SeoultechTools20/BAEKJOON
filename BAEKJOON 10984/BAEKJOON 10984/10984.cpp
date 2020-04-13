#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t , subject , credit;
	double grade, gpa, total2 , total;
	vector <double> v1;
	vector <double> v2;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cout.precision(0);
		cout.unsetf(ios::fixed);
		total = 0.0;
		total2 = 0.0;
		gpa = 0.0;
		v1.clear();
		v2.clear();

		cin >> subject;
		for (int j = 0; j < subject; j++)
		{
			cin >> credit >> grade;
			v1.push_back(credit);
			v2.push_back(grade);
		}

		for (int i = 0; i < subject; i++)
		{
			total += v1[i];
			total2 += v1[i] * v2[i];
		}
		gpa = total2 / total;
		cout << total << " ";
		cout << fixed;
		cout.precision(1);
		cout << gpa << endl;
		
	}
}