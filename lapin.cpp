#include <iostream>
#include <string.h>

using namespace std;
int main()
{
  int t;
  cin >> t;
  string s;
  while (t--)
  {
    cin >> s;
    getchar();
    int len = s.length();
    int ls[26] = {0};
    int rs[26] = {0};
    for (int i = 0; i < len / 2; i++)
    {
      int index = s[i] - 97;
      ls[index]++;
    }
    for (int i = (len + 1) / 2; i < len; i++)
    {
      int index = s[i] - 97;
      rs[index]++;
    }
    int temp = 0;
    for (int i = 0; i < 26; i++)
    {
      if (ls[i] != rs[i])
      {
        temp = 1;
      }
    }
    if (temp == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
