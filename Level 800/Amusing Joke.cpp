#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s1, s2, s3;
	cin >> s1;
	cin >> s2;
	cin >> s3;

	int n1, n2, n3;
	n1 = s1.length();
	n2 = s2.length();
	n3 = s3.length();

	if (n1 + n2 != n3)
	{
		cout << "NO";
		return 0;
	}

	char* a = new char[n3];
	char* b = new char[n3];

	int j1 = 0;
	int j2 = n1;
	
	for (int i = 0; i < n1; i++)
	{
		a[j1] = s1[i];
		j1++;
	}
	for (int i = 0; i < n3 - n1; i++)
	{
		a[j2] = s2[i];
		j2++;
	}
	
	sort(a, a + n3);
	
	for (int i = 0; i < n3; i++)
	{
		b[i] = s3[i];
	}

	sort(b, b + n3);

	int flag = 1;
	for (int i = 0; i < n3; i++)
	{
		if (a[i] != b[i])
			flag = 0;
	}

	if (flag == 0)
		cout << "NO";
	else
		cout << "YES";

	delete[]a;
	return 0;
}
