#include <stdio.h>
int main()
{
    int x = 9;
    int salary = (x == 50) ? 300 : (x < 50) ? (3 * x + 200)
                                            : (4 * x + 400);
}
//--q, q--;
int n=--q;//q-- then n assign;
int m=q--;//first e assign then q--;