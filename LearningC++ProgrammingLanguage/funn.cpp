#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cnt[256] = { 0 };
	char s[] = "abcabceda";
	for (int i = 0; char c = s[i]; i++)
	{
		cnt[c]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (cnt[s[i]])
		{
			cout << s[i] << " : " << cnt[s[i]] << endl;
			cnt[s[i]] = 0;
		}
	}
}
