#include <stdio.h>
int main()
{
int a,b,r,tich;	
scanf("%d %d",&a,&b );
if(a<=0||b<=0) 
{
	printf("ERROR");
	return 0;
}
tich=a*b;
while(b!=0)
{
	r=a%b;
	a=b;
	b=r;
}
printf("%d\n%d",a,tich/a);
return 0;
}

