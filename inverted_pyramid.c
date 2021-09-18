#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:\n");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        for (int space = n; space > i; space--)
        {
            printf(" ");
        }
        for (int start = 0; start < 2 * i + 1; start++)
        {
            if ( start == 0 || start == (((2 * i) + 1 - 1)) || i==n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//$ ./inverted_pyramid.exe 
// Enter the n:
// 6
// *************
//  *         *
//   *       *
//    *     *
//     *   *
//      * *
//       *