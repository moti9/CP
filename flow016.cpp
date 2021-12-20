#include <bits/stdc++.h>

using namespace std;
long int gcd(int a, int b){
    if (b==0) 
    {
        return a;
    }
    else
    {
        return gcd(b , a%b);
    }
    
    
}
int main()
{
    int t;
    cin >> t;
    long int a, b, x, y;
    while (t--)
    {
        cin >> a >> b;
        x = a;
        y = b;
        long int lcm=(x*y)/gcd(a,b);
        
        
        cout << gcd(a,b) << " " << lcm << endl;
    }

    return 0;
}