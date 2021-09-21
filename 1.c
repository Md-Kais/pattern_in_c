// #include <stdio.h>
// void main()
// {
//     int i, j, m, a[5] = {5, 1, 15, 20, 25};
//     i = ++a[1];//2
//     j = a[1]++;//2
//     m = a[i++];//i=3;
//     printf("%d, %d, %d", i, j, m);
// } //3, 2, 15
// #include <stdio.h>

// int main()
// {
//     int i, sum = 0;
//     for (i = 1; i < 20 && sum < 100; ++i,printf("%d::\n",i))
//     {
//         //i==2;//i==4;
//         sum = sum + i;
//         printf ("%d \n",sum);//1 3
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int k, num = 30;
//     k = (num > 5 ? (num <= 10 ? 100 : 200) : 500);
//     printf("\n % d", k);
// }
#include <stdio.h>
void main()
{
    // int a, b = 0, c[10] = {1, 2, 4, 6, 9, 13, 12, 5, 7, 3};
    // for (a = 0; a < 10; a++)
    // {
    //     if (c[a] % 2 == 0)
    //         b += c[a];
    // }
    // printf("%d", b);
    char a[30];
    sprintf(a,"%s %d","kasdsfsa",121);//substring -> string
    char weekday[20], month[20], dtm[100];
    int day,year;
    char dtm[400]="tuesday jan 23 skips 2022";
    sscanf(dtm, "%s %s %d skips %d", weekday, month, &day, &year);//string->substring;
    printf("%s",a);
    //jai likho strinig bangeya.
}
//integer to string;
