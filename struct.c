#include <stdio.h>
typedef struct
{
    char name[30];
    int id;
    double basic_salary;
} person;
int main()
{
    int n;
    scanf("%d", &n);
    person p[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", p[i].name);
        scanf("%d", &p[i].id);
        scanf("%lf", &p[i].basic_salary);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\t", p[i].name);
        printf("%d\t", p[i].id);
        printf("%.2lf\t", p[i].basic_salary);
        printf("%.2lf\t", p[i].basic_salary + p[i].basic_salary * 0.4 + 1000);
        printf("\n");
    }
}