#include<stdio.h>
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int ma[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
    printf("%d\n", *(*mat) + 0);
    printf("%d\n",*(*(mat+1))+0);
    printf("%d\n", *(*(mat + 2)) + 0);
    printf("%d\n", *(*mat) + 1);
    printf("%d\n", *(*(mat + 1)) + 1);
    printf("%d\n", *(*(mat + 2)) + 1);
    printf("%d\n", **(*ma) + 0);
    printf("%d\n", **(*(ma + 1)) + 0);
    printf("%d\n", **(*(ma + 2)) + 0);
    printf("%d\n", **(*ma) + 1);
    printf("%d\n",*(*(*(ma + 1)+1) + 1));
}