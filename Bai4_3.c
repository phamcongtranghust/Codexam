#include <stdio.h>
int main()
{
int n,s=0;
scanf("%d",&n);
if(n>=1000||n<0)
{
	printf("ERROR");
	return 0;
} 
while(n>0)
{
	s+=n%10;
	n/=10;
}
printf("%d",s);
return 0;
}
