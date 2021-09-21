#include<stdio.h>
void main( ){
 int p, q, m, n;
 p = q = 7;
 p += 2;
 q -= 3;
 m = ++p;
 n = q--;
 printf("M=%d\n N=%d\n P=%d\n Q=%d\n", m--, n, ++p, q);
 }