#include <stdlib.h>
#include <stdio.h>

int str_cmp(char *str1, char *str2)
{
    bool i = true;
    int x = 0;
    while(i = true)
    {
        if(str1[x] == str2[x])
        {
            x = x+1;
        }
        else
        {
            i = false;
        }

    }
    return(i);
    
}


int main()
{
    char str1[] = "hello world !";
    char str2[] = "hello world !";

    int i = str_cmp(str1, str2);
    printf("%d\n", i);

    exit(0);
}