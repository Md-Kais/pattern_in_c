#include <stdio.h>

int main()
{
    int a[] = {41, 152, 63, 4, 15, 6, 7, 458, 29, 10};
    int i, j, n = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}