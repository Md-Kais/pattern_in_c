#include <stdio.h>
int main()
{
    int n, m,n1,m1;
    scanf("%d %d", &n, &m);

    int mat[n + 1][m + 1];
  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    scanf("%d %d", &n1, &m1);
    int mat2[n1 + 1][m1 + 1];
    if(m!=n1){
        printf("Not Answerable");
        return 0;
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    int ans[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            int sum = 0;
            for (int k = 0; k < n1; k++)
            {
                
                sum += mat[i][k] * mat2[k][j];
            }
            ans[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}