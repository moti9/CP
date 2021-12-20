#include<iostream>


using namespace std;
int main(){
    int t,n,r;
    long long sum;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        sum=0;
        while (n>0)
        {
           r=n%10;
           sum=sum*10 + r;
           n/=10; 
           
        }
        cout<<sum<<endl;
        

    }

return 0;
}