#include <iostream>

using namespace std;

void rev(string s)
{
    if (s.length() == 0)
        return;

    string restStr = s.substr(1);
    // cout << restStr << "\n";
    rev(restStr);
    cout << s[0];
}

int main(int argc, char const *argv[])
{
    rev("Moti");
    return 0;
}
