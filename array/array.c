#include <stdio.h>
#include <stdbool.h>
int arry[100];
void nhapmang();
void xuatmang();
void xuatmangnguoc();
void sumodd();
int sumeven();
int min();
void ascending();
bool checknumber();
void prime();

void swap();
void selectionsort();
void main()
{
    int n;
    printf(" nhap so phan tu mang: ");
    scanf("%d", &n);
    nhapmang(n);
    selectionsort(n);
    // prime(n);
    // ascending(n);
    xuatmang(n);
    // xuatmangnguoc(n - 1);
    // sumodd(n);
    // printf("%d", min(n));
}
void xuatmangnguoc(int n)
{
    if (n >= 0)
    {
        printf(" xuat phan tu mang arry[%d] = %d \n", n, arry[n]);
        xuatmangnguoc(n - 1);
    }
}
void nhapmang(int n)
{

    for (int i = 0; i < n; i++)
    {
        printf(" nhap phan tu mang arry[%d] =  ", i);
        scanf("%d", &arry[i]);
    }
}
void xuatmang(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" xuat phan tu mang arry[%d] = %d \n", i, arry[i]);
    }
}
void sumodd(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] % 2 != 0)
        {
            sum += arry[i];
        }
    }
    printf(" sum = %d \n", sum);
}
int sumeven(int n)
{
    int sum = 0;
    if (n < 0)
    {
        return 0;
    }
    if ((arry[n] % 2) != 0)
    {
        sum = arry[n];
    }
    return sum + sumeven(n - 1);
}
int min(int n)
{
    int min = arry[0], m;
    for (int i = 1; i < n; i++)
    {
        if (arry[i] < min)
        {
            min = arry[i];
            m = i;
        }
    }
    return m + 1;
}
void ascending(int n)
{
    int m;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[j] < arry[i])
            {
                m = arry[i];
                arry[i] = arry[j];
                arry[j] = m;
            }
        }
    }
}
bool checknumber(int n)
{

    if (n < 0)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void prime(int n)
{
    for (int i = 0; i < n; i++)
    {
        checknumber(arry[i]);
        if (checknumber(arry[i]))
        {
            printf("%d\n", arry[i]);
        }
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionsort(int n)
{
    int m, i, j;
    for (i = 0; i < n - 1; i++)
    {
        m = i;

        for (j = i + 1; j < n; j++)
        {
            if (arry[j] < arry[m])
            {
                m = j;
            }
        }
        swap(&arry[m], &arry[i]);
    }
}