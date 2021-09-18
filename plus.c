#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d", &n);
    int star=1;
    int spaces=n-1;
    for(int i=1;i<n*2;i++){
        for(int space=1;space<=n-1 && i!=n;space++){
            printf(" ");
        }
        for(int j=1;j<=star*2;j++){
            if(j==1 || i==n){
                printf("*");
            }
           
        }
        printf("\n");
        if(i<n){
            star++;
            spaces--;
        }
        else{
            star--;
            spaces++;
        }
    }
}
// $ ./plus.exe 
// Enter the n
// 6
//      *
//      *
//      *
//      *
//      *
// ************
//      *
//      *
//      *
//      *
//      *