#include <stdio.h>
int bitwiseN(int n)
{
    if (n >> 1)
    {
        bitwiseN(n >> 1);
    }
    if (n & 1)
        printf("1");
    else
        printf("0");
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The binary representation of %d is: ", n);
    bitwiseN(n);
}