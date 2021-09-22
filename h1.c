#include<stdio.h>
int main(){
   struct account{
       char a;
       char b[20];
       float c;
   };
    struct account acc;
    printf("%d\n",sizeof(acc));
}