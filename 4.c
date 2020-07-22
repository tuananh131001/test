#include <stdio.h>
int main()
{
    char trash;
    char names[5][50];
    for(int i=0;i<5;i++)
    {
        printf("Enter full name %d:",i+1);
        scanf("%s",names[i]);
        scanf("%c",&trash);
    }
    for(int i=0;i<5;i++)
    {
        printf("Here are the first name %d:",i+1,names[i]);
    }

    return 0;
}
