#include <stdio.h>
int main()
{
    char text[100], str_back[100];
    int index_max,space,inback;
    printf("Enter a text to convert backward:\n");
    scanf("%s",&text);
    for(space=0 ;text[space] != '\0';space++)
    index_max=space-1; //find max index of the normal text
    /*printf("%d\n",space); */
    for(inback=0;inback<=space;inback++)
    {
        str_back[inback]=text[index_max]; //find the order of string backward
        index_max--;
    }
    for(int inback=0;inback<space;inback++)
    {
        printf("%c",str_back[inback]);
    }
   return 0;
}
