#include <stdio.h>
#include <math.h>

void main()
{

    int a, count;
    printf("Nhap vao so can kiem tra a = \n");
    scanf("%d", &a);
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && a > 1)
    {
        printf("a la so nguyen to\n");
    }
    else
    {
        printf("a khong phai so nguyen to\n");
    }
}