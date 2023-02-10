#include<stdio.h>
void name_entry(char name[1][20], int n, int i)
{
    for(i = 0; i<n; i++)
    {
        fflush(stdin);
        printf("Enter %d no. Name : ",i+1);
        scanf("%19[^\n]s", name[i]);
    }
}

void printing_name(char name[1][20], int n, int i)
{
    for(i = 0; i<n; i++)
    {
        printf("\n%s", name[i]);
    }
}
void age_entry(int age[2], int n, int i)
{
    for(i = 0; i<n; i++)
    {
        fflush(stdin);
        printf("Enter %d no. Age : ",i+1);
        scanf("%d", &age[i]);
    }
}

void printing_age(int age[2], int n, int i)
{
    for(i = 0; i<n; i++)
    {
        printf("\n%d", age[i]);
    }
}
int main()
{
    int n,i = 0;
    printf("Enter No. Of Data : ");
    scanf("%d",&n);
    char name[n][20];
    int age[n];
    name_entry(name, n, i);
    age_entry(age, n, i);
    printing_name(name, n, i);
    printing_age(age, n, i);
}
