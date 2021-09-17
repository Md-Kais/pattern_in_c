#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        //space in the front
        for (int space = 0; space < n - i; space++)
        {
            printf(" ");
        }
        //* in the middle
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
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