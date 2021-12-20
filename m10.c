#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b){
    return a+b;
}
void greet(){
    printf("Hello World my user good morning");
}
int main(){
   printf("The sum of 1 and 2 is %d\n",sum(1,2));  //Testing the function
   int (*fptr)(int,int); //Declearing a function pointer
   fptr=&sum; //Creating function pointer
   int d=(*fptr)(63,81); //De-referencing a function pointer
   printf("The value of d is %d",d);

return 0;
}