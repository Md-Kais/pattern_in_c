#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    int star=1;
    int spaces=n-1;
    for(int i=1;i<n*2;i++){
        for(int space=1;space<=spaces;space++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
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
//$ ./half_diamond.exe 
// Enter number of rows:
// 6
//      *
//     **
//    ***
//   ****
//  *****
// ******
//  *****
//   ****
//    ***
//     **
//      *