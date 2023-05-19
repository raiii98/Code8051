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
void insertionsort();
void swap();
void selectionsort();
int binarysearch();
void findbyloop();
void addelement();
void removeelement();
void main()
{
    int n, a, b;
    printf(" nhap so phan tu mang: ");
    scanf("%d", &n);
    nhapmang(n);
    xuatmang(n);
    // printf(" nhap vi can them vao mang a = ");
    // scanf("%d", &a);
    // printf(" nhap gia tri can them vao mang b = ");
    // scanf("%d", &b);
    // addelement(&n, a - 1, b);
    printf("nhap vi tri mang can xoa:");
    scanf("%d", &a);
    removeelement(&n, a - 1);
    xuatmang(n);
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
void insertionsort(int n)
{
    int m, i, j;
    for (i = 1; i < n; i++)
    {
        m = arry[i];
        j = i - 1;
        while (j >= 0 && arry[j] > m)
        {
            arry[j + 1] = arry[j];
            j--;
        }
        arry[j + 1] = m;
    }
}
int binarysearch(int l, int r, int x)
{
    if (r > l)
    {
        int mid = l + (r - l) / 2;
        if (arry[mid] == x)
            return mid;
        if (arry[mid] < x)
            return binarysearch(mid + 1, r, x);
        return binarysearch(l, mid - 1, x);
    }
    return -1;
}
void findbyloop(int n)

{
    int first, second;
    if (arry[0] > arry[1])
    {
        first = arry[0];
        second = arry[1];
    }
    else
    {
        first = arry[1];
        second = arry[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arry[i] > first && arry[i] > second)
        {
            second = first;
            first = arry[i];
        }
        else if (arry[i] > second && arry[i] < first)
        {
            second = arry[i];
        }
    }
    printf("first = %d, second = %d\n", first, second);
}
void addelement(int *n, int location, int value)
{
    if (*n >= 100)
    {
        return;
    }
    if (location <= 0)
    {
        location = 0;
    }
    else if (location >= *n)
    {
        location = *n;
    }
    for (int i = *n; i > location; i--)
    {
        arry[i + 1] = arry[i];
    }
    arry[location] = value;
}
void removeelement(int *n, int location)
{
    if (location < 0 || location >= *n)
    {

        printf("vi tri khong hop le");
        return;
    }
    for (int i = location; i < *n; i++)
    {
        arry[i] = arry[i + 1];
    }
    --*n;
}