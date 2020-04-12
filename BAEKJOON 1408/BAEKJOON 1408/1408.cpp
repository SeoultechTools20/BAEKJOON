#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
	string t1, t2;
	int h1, h2, h3, m1, m2, m3, s1, s2, s3;

	cin >> t1 >> t2;

	h1 = atoi(&t1[0]);
	m1 = atoi(&t1[3]);
	s1 = atoi(&t1[6]);

	h2 = atoi(&t2[0]);
	m2 = atoi(&t2[3]);
	s2 = atoi(&t2[6]);

	if (s1 <= s2)
	{
		s3 = s2 - s1;
	}
	else
	{
		s3 = s2 + 60 - s1 ;
		m2 = m2 - 1;
	}
	if (m1 <= m2)
	{
		m3 = m2 - m1;
	}
	else
	{
		m3 = m2 + 60 - m1;
		h2 = h2 - 1;
	}
	if (h1 <= h2)
	{
		h3 = h2 - h1;
	}
	else
	{
		h3 = h2 + 24 - h1;
	}

	printf("%02d:%02d:%02d", h3, m3, s3);
	return 0;
}