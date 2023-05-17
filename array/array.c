#include <stdio.h>
int arry[100];
void xuatmangnguoc(int n)
{
    int i = n - 1;
    if (i >= 0)
    {
        printf(" xuat phan tu mang arry[%d] = %d \n", i, arry[i]);
        xuatmangnguoc(i - 1);
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
void main()
{
    int n;
    printf(" nhap so phan tu mang: ");
    scanf("%d", &n);
    nhapmang(n);
    xuatmangnguoc(n);
}
