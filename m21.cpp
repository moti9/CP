#include<iostream>


using namespace std;
int main(){
    int n;
    cin>>n;
    int rem,a[n],i=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        a[i]=rem;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        cout<<a[j];
    }
    
    

return 0;
}