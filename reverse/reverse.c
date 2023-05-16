#include <stdio.h>

void reverse()
{
    int c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverse();
        printf("%c", c);
    }
}
void main()
{
    printf("nhap vao chu: \n");
    reverse();
}
