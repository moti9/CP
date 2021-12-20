#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            cout << "Vowel";
        }
        else
        {
            cout << "Consonant";
        }
    }
    else
    {
        return 0;
    }

    return 0;
}