#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int space=n-i;
		for(int k=0;k<space;k++)printf(" ");

		int star=i*2-1;
		for(int k=0;k<star;k++) printf("*");

		printf("\n");
	}
}
