#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int number=1;int flag=0;
    for(int i=1;i<=n;i++){
        flag=0;number=1;
        for(int space=n;space>i;space--){
            printf(" ");
        }
        for(int j=1;j<=2*(i-1)+1;j++){
            printf("%d",number);
            if(j==i){
               flag=1;
            }
            if(flag==1) number--;
            else number++;
        }
        printf("\n");
    }
}
//PS E:\pattern_in_c> .\PyramidSir
// Enter the number:5
//     1
//    121
//   12321
//  1234321
// 123454321