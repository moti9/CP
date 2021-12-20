#include<stdio.h>
//#include<stdlib.h>

int main(){
    FILE *ptr=NULL;
    char string[100000]= "Moti";
    //*************Reading a file***************
    //ptr=fopen("mv.txt", "r");
    //fscanf(ptr,"%s",string);
    //printf("The content of the mv.txt file  %s \n",string);

    //***************Writing a file*************
    //ptr=fopen("mv.txt","w");
    //fprintf(ptr,"%s",string);

    //*****************"r+"************
   // ptr=fopen("mv.txt","r+");//Work like writing
   // fprintf(ptr,"%s",string);

//********"a"***********
ptr=fopen("mv.txt","a");
fprintf(ptr,"%s",string);

return 0;
}