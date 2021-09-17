#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i-1; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            //space in the front

            printf("*");
        }
        printf("\n");
    }
}
// Enter the n
// 6
//      ******
//     ******
//    ******
//   ******
//  ******
// ******