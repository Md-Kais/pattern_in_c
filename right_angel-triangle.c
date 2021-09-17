#include<stdio.h>
int main(){
    int n;
    printf("Enter the n\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
       
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}
// Output:
// Enter the n
// 5
// *
// * *  
// * * * *
// * * * * *
// * * * * * *