#include <stdio.h>
int main()
{
int n,s=0;
scanf("%d",&n);
while(n>0)
{
	s+=n%10;
	n/=10;
}
if(n>=1000||n<0) printf("ERROR");
else printf("%d",s);
return 0;
}

