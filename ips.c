
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "This is CSE Programming";
    printf("%c", str[0]);
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ') {
            printf("%c", str[i+1]);
        }
    } 
}
