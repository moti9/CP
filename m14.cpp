#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int z,p1=2,p2,j,k,x=0;
        cin>>z;
        for(k=3;k<=z;k++)
        {
            for(j=2;j<k;j++)
           {
             if(k%j==0)
              {
                  x=1;
                break;
              }
           }
          if(x==0)
           {
            p1=p1*k;
            if(p1<=z)
              {
                p2=p1;
                p1=k;
              }
              else
              {
                  break;
              }
           }
           x=0;
        }
        cout<<"Case #"<<i<<": "<<p2<<"\n";
    }
    return 0;
}