#include<stdio.h>


int main(){
     FILE *ptr=NULL;
     ptr=fopen("mv.txt","r");// till line 15 use r after that w
     //char c=fgetc(ptr);
     //printf("The character I read was %c \n",c);
     //c=fgetc(ptr);
     //printf("The character I read was %c \n",c);
     //fclose(ptr);
     
     char str[63];
     fgets(str,100,ptr);
     printf("The string is %s",str);
     fclose(ptr);

     //  fputc('V',ptr);
     //  fputs("This is moti",ptr);

     //fclose(ptr);

     return 0;
}