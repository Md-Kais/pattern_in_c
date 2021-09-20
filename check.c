#include<stdio.h>
int main(){
    char a='a';
    char b[]="a";
    printf("%d %d\n",sizeof(a),sizeof(b));
    int *p, q;
    q = 22;
    p = &q;
    q = 11;
    *p = 2;
    printf("%d %d",*p,q);
} 