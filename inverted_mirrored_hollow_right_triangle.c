#include<stdio.h>
int main(){
    int n;
    printf("Enter the n:\n");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int space = n;space>i;space--){
            printf(" ");
        }
        for(int j=i;j>0;j--){
            if(i==1 || i==n || j==i || j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
}
//$ ./inverted_mirrored_hollow_right_triangle.exe   
// Enter the n:
// 5
// *****
//  *  *
//   * *
//    **
//     *