#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m,sum1=0,sum2=0;
        cin>>n>>m;

        for(int j=1;j<=n;j++)
        {
            int c[m],k;
            for(k=0;k<m;k++)
            {
                cin>>c[k];
            }
            for(k=0;k<m;k++)
            {
                if(c[k]==1)
                {
                    sum2++;
                }
                else if(c[k]==1 && c[k-1]==0)
                {
                    sum1++;
                }
            }
        }
        cout<<sum1<<"\n";
    }
	return 0;
}

//incomplete
