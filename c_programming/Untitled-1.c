#include <stdio.h>

int main() {
    char str[] = "abcde";
    int len = strlen(str);
    
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
            printf("%c", str[j]);
        }
       
        printf("\n");
    }
    
    return 0;
}
