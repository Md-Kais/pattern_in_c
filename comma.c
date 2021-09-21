#include<stdio.h>
int main(){
    int a,b;
    a=(3,4,8);
    printf("%d\n",a);///8
    a=5,6,7;
    printf("%d\n",a);//5
    int var =(printf("%s", "hello"), printf("%s", "worldkais"));
    printf("%d\n",var);//9
    int kais = (printf("%s", "hello"));
    printf("%d\n",kais);//5
}