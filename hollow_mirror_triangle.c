#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < n - i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == n || j == 1 || j == i)
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
//$ ./hollow_mirror_triangle.exe
// Enter the n
// 5
//     *
//    **
//   * *
//  *  *
// *****