#include<iostream>


using namespace std;
int main(){
    int n, k, count = 0,i;
    int a;
    cin >> n >> k;
    if (n > 100000000 || k > 100000000)
        return 0;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a % k == 0)
            count++;
    }
    cout << count << endl;

return 0;
}