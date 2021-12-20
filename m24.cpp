#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char s[] = "MotiV";
    cout << strlen(s) << endl
         << strrev(s) << endl;

    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    cout << len << endl;
    char temp;
    for (int i = 0; i <= (len - 1) / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }

    cout << s;

    return 0;
}