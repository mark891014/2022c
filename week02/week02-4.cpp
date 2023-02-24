#include <iostream>
int main()
{
	long long int a,b;
	while(std::cin>>a>>b){
		long long int ans = a - b;
			if(ans<0) ans=b-a;
			std::cout<<ans<<std::endl;
	}
}
/*#include <stdio.h>
int main()
{
	long long int a,b;

	while(	scanf("%d%d", &a, &b)==2){
		long long int ans = b - a;
		if(ans<0) ans=a-b;
		//if(a>b) ans=a-b;
		//if(b>a) ans=b-a;
		printf("%lld\n", ans);
	}
}*/
