#include<stdio.h>
#include<math.h>

int main(){
     int t,n,sr;
     scanf("%d",&t);
     for (int i = 0; i < t; i++)
     {
         scanf("%d",&n);
        sr=sqrt(n);
        printf("%d\n",sr);
     }
     

return 0;
}