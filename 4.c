#include <stdio.h>
int main()
{
    char trash;
    char names[5][50];
    for(int i=0;i<5;i++)
    {
        printf("Enter full name %d:",i+1);
        scanf("%[^\n]s",names[i]);
        scanf("%",&trash);
    }

    return 0;
}
