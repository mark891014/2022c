///口訣: 從左到右巡一輪，兩兩比較，不對就交換
#include <stdio.h>
int a[10]={90,80,70,60,50,40,30,20,10,0};

int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10;i++){
        if(a[i]>a[i+1]){///希望左小又大，但不對...
            int temp=a[i];///不對就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
