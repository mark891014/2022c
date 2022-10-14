#include <stdio.h>
int main()
{
    int a=10;
    if(-999) printf("-999成立\n");
    if(-99) printf("-99成立\n");
    if(-9) printf("-9成立\n");
    if(-5) printf("-5成立\n");
    if(-4) printf("-4成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(-0) printf("0不成立,所以沒有印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(999) printf("999成立\n");
    if("a==0")printf("不管什麼幾乎都成立\n");
}
