# 2022c
程式設計課
# week 06
## step01
考試九九乘法表
```cpp
#include <stdio.h>
int main()
{
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			printf("%d*%d=%2d ",j,i,j*i);
		}
		printf("\n");
	}
}
```
##step02
畫星星(2層迴圈)
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int space=5-i;
        int star=i*2-1;
        for(int k=0;k<space;k++)
        {
            printf("");
        }
    for(int k=0;k<star;k++)
    {
        printf("");
    }
    printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
##step03
最大公因數(暴力)
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個數: ");
    int a,b,ans;
    scanf("%d%d",&a,&b);

    for(int i=1;i<a;i++)
    {
        if(a%i==0&&b%i==0)
            ans=i;
    }
    printf("找到ans:%d",ans);
}
```
##step04
輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a,b,c;
    scanf("%d%d",&a,&b);

    while(1)
    {
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的是%d",b);
}
```
##step05
while(1) 為什麼是「一直做」的迴圈?
```cpp
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
```
# week 07
##step01
int,long long int的差別
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("int最大32-bit:%d\n\n",n);///最大32-bit
    long long int a=1234567812345678;
    printf("long long int最大64-bit:%lld\n",a);///最大64-bit
}
```
##step02
暴力破解最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,ans;
    scanf("%lld%lld",&a,&b);
    for(long long int i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
            ans=i;
    }
    printf("最大公因數是:%lld\n\n",ans);///算很慢
}
```
##step03
輾轉相除法得最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);
    while(1)
    {
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("\n輾轉相除法\n得最大公因數:%lld\n",b);
}
```
##step04
剝皮法求個位數
```cpp
#include <stdio.h>
int main()
{
    int n=123456789;
    while(n>0)
    {
        printf("個位數是:%d\n",n%10);
        n=n/10;
    }
}
```
##step04-2
10進轉2進(從下往上看)
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入數字: ");
    int n;
    scanf("%d",&n);
    while(n>0)
    {

        printf("%d\n",n%2);
        n=n/2;
    }
    printf("從下往上看");
}
```
