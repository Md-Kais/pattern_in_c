/**
 * C program to print diamond star pattern 
 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int star = 1;
    int spaces = n - 1;
    for (int i = 1; i < n * 2; i++)
    {
        for (int k = spaces; k >0; k--)
        {
            printf(" ");
        }
        for (int j = 1; j < star * 2; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i < n)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}
//$ ./diamond.exe 
// Enter the number of rows: 5
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *