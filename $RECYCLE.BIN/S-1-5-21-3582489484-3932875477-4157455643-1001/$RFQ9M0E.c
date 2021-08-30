#include <stdio.h>
#include <string.h>
struct stud
{
    char name[50];
    char add[50];
    int salary ;
} s[100];
int main()
{
    struct stud t;
    int i = 0, j = 0, n;
    printf("/*How many student records you want to enter?*/");
    printf("\n\nEnter Limit : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Student-%d Details", i + 1);
        printf("\n--------------------------\n");
        printf("Enter Name     : ");
        scanf("%s", s[i].name);
        printf("Address        : ");
        scanf("%s", s[i].add);
        printf("Salary         : ");
        scanf("%d", &s[i].salary);        
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    printf("\n-----------------------------------\n");
    printf("Student Name\tAddress\tSalary\n");
    printf("--------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%-10s\t%3s\t%3d\n", s[i].name, s[i].add ,s[i].salary);
    }
    return 0;
}