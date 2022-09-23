#include <stdio.h>
int main()
{
    printf("請輸入一個數字:");
    int n;
    scanf("%d",&n);
    printf("\n用  8除 餘%d",n%8);
    printf("\n用  9除 餘%d",n%9);
    printf("\n用 15除 餘%d",n%15);
}
