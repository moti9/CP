#include<bits/stdc++.h>


using namespace std;
int genrand_num(int n)
{
    srand(time(NULL)); 
    return rand() % n;
}
int greater(char c1, char c2)
{
    
    if (c1 == c2)
    {
        return 1;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
}

int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        
    }
    
    

return 0;
}
//INCOMPLETE