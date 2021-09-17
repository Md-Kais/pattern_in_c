#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < i-1; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
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