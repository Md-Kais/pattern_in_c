#include <stdio.h>
int main()
{
    register int x = 30;// static variable
    printf("Outer x is : %d\n", x);
    while (x++ < 33)
    {
        printf("inner x is : %d\n", x);// Outer Local X;
        register int  x = 100;//declaring local x; it creates a whole new scope OF x.
        x++;
        printf("Inner x is : %d\n", x);//innner Local X;
    }
    printf("Outer x is : %d\n", x);
    return 0;
}
// Outer x is : 30
// inner x is : 31
// Inner x is : 101
// inner x is : 32
// Inner x is : 102
// inner x is : 33
// Inner x is : 103
// Outer x is : 34