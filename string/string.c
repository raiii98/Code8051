#include <stdio.h>
#include <string.h>
int main()
{
}
int length(char str[])
{
    int i = 0;
    while (str[i] != NULL)
    {
        i++;
    }
    return i - 1;
}
char *daonguoc(char str[])
{
    int len = length(str);
}