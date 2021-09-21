#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int mat[row + 1][col + 1];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    //transpose matrix;
    int transpose[col + 1][row + 1];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
    //print
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}