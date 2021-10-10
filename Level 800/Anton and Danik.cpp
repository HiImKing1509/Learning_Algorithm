#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	string s;

	cin >> n;
	cin >> s;

	int countA = 0;
	int countD = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'A')
			countA++;
		if (s[i] == 'D')
			countD++;
	}
	if (countA == countD)
		cout << "Friendship";
	else if (countA > countD)
		cout << "Anton";
	else
		cout << "Danik";

	return 0;
}
