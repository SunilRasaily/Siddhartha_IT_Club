#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char abc[] = "abcde";
    int length = strlen(abc);
    for(i=0; i<=length; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c",abc[i]);
        }
            printf("\n");
    }
    return 0;
}