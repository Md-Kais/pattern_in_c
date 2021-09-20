#include<stdio.h>
int main(){
    int n;
    printf("Enter the N:");
    scanf("%d",&n);
    int number=1,flag=0;
    for(int i=1;i<=n;i++){
        flag=0,number=1;
        for(int j=1;j<=2*(i-1)+1;j++){
            printf("%d",number);
            if(j==i) flag=1;
            if(flag==1) number--;
            else number++;
        }
        printf("\n");
    }
}