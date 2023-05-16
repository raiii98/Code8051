#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int number(int n)
{
    int last, count = 0;
    while (n > 0)
    {
        last = n % 10;
        n /= 10;
        count++;
    }
    return count;
}
bool kiemtra(int n)
{
    int last, sum = 0, num = n;
    int count = number(n);
    while (num > 0)
    {
        last = num % 10;
        num /= 10;
        sum += pow(last, count);
    }
    if (sum == n)
    {

        return true;
    }
    return false;
}
void main()
{
    int n;
    printf("Nhap vao 1 so n = ");
    scanf("%d", &n);
    printf("%d\n", kiemtra(n));
}