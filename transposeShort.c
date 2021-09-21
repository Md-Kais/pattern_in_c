#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter row and column number:\n ");

    scanf("%d%d", &n, &m);
    int mat[n + 1][m + 1];
    //take matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    //transpose
    int transpose[m + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
    //print
    printf("Transpose of the Matrix is:\n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
