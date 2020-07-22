#include <stdio.h>
int main()
{
    char trash;
    char first_name[5][32];
    char last_name[5][32];
    //last name include middlename + last name
    for(int i=0;i<5;i++)
    {
        printf("Enter full name %d:",i+1);
        scanf("%s %[^\n]s",first_name[i],last_name[i]);

    }
    //make a new line
    printf("\n");
    printf("Here are the first names.\n");
    for(int i=0;i<5;i++)//loop to print all 5 first name
    {
        printf("%s, ",first_name[i]);

    }

    return 0;
}
