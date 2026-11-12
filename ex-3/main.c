#include <stdlib.h>
#include <stdio.h>

void str_rev(char *str)
{
    int i = 4;
    while(i > -1)
    {
        printf("%c", str[i]);
        i = i-1;
    }

}

int main()
{
    char *str1 = "Hello";
    str_rev(str1);
}