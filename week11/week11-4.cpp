///�f�Z: �q����k���@���A������A����N�洫
#include <stdio.h>
int a[10]={90,80,70,60,50,40,30,20,10,0};

int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){///���@��
        if(a[i]>a[i+1]){///�Ʊ楪�p�S�j�A������...
            int temp=a[i];///����N�洫
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){///���@��
        if(a[i]>a[i+1]){///�Ʊ楪�p�S�j�A������...
            int temp=a[i];///����N�洫
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){///���@��
        if(a[i]>a[i+1]){///�Ʊ楪�p�S�j�A������...
            int temp=a[i];///����N�洫
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
