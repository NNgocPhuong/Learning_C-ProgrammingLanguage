#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cnt[256]={0};
	string s;
	getline(cin, s);
	for (int i = 0; char c = s[i]; i++)
	{
			cnt[c]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (cnt[s[i]])
		{
			cout << char(s[i]) << ":" << cnt[s[i]] << endl;
			cnt[s[i]] = 0;
		}
	}
}
