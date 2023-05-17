#include <stdio.h>
long long giaiThua(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * giaiThua(n - 1);
}
// void reverse()
// {
//     int c;
//     scanf("%c", &c);
//     if (c != '\n')
//     {
//         reverse();
//         printf("%c", c);
//     }
// }
void main()
{
    printf("nhap vao chu: \n");
    // reverse();
    int n;
    scanf("%d", &n);
    printf("%lld", giaiThua(n));
}
