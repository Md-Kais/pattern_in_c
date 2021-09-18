#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = n * 2 - 1;

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (j == i || (j == count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
// $ ./x
// 5
// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *