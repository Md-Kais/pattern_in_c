#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            printf(" ");
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            if (i == 0 || i == n - 1 || star == 0 || star == 2 * i )
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
//$ ./hollow_pyramid.exe 
// Enter the n:
// 6
//      *
//     * *
//    *   *
//   *     *
//  *       *
// ***********