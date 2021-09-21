
// #include<stdio.h>
// int main(void)
// {
//     int a = 20, b = 10, c, d;
//     c = ++a - b;
//     d = b++ + a;
//     printf("a = %d b = %d c = %d d = %d", a, b, c, d);
//     printf("\n %d", a % b);
//     printf("\n %d", (c < d) ? c : d);
//     printf("\n %f", (float)(a / b));
// }
#include <stdio.h>

void print_binary(unsigned int number)
{
    if (number >> 1)
    {
        print_binary(number >> 1);
    }
    putc((number & 1) ? '1' : '0', stdout);
}
int main(){
    unsigned int number;
    printf("Enter a number: ");
    scanf("%u", &number);
    print_binary(number);
    putchar('\n');
}