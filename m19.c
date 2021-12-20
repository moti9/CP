#include<stdio.h>


int main(){
     int n,start=0,num=0;
     scanf("%d",&n);
     scanf("%d",&start);
     int a[n];
     for (int i = 0; i < n; i++)
     {
         a[i]=start+ (2*i);
     }
     for (int i = 0; i < n; i++)
     {
       num=num^a[i];  
     }
     printf("%d",num);
     
     

return 0;
}