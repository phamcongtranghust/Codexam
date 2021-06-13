#include <stdio.h>
int main()
{
int i=1,n;	
float x,mu,gt,s1,s2,s3;
scanf("%d %f",&n,&x);
if(n<=0)
{
	printf("ERROR");
	return 0;
}
s1=s2=s3=1;
mu=1; gt=1;
while(i<=n)
{
	mu*=x;
	gt*=i;
	s1+=mu;
	if(i%2==1) s2-=mu; else s2+=mu;
	s3+=mu/gt;	
	i++;
}
printf("%f\n%f\n%f\n",s1,s2,s3);
return 0;
}

