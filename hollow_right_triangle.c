#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if(i==1 || i==n || j==1 || j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
// Output:
// $ ./hollow_right_triangleEnter the n
// 5
// *
// **
// * *
// *  *
// *****