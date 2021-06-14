#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,gt;
	float x,mu,s1,s2,s3,s4;
	scanf("%f %d",&x,&n);
	if(n<1||x<0)
	{
		printf("Error");
		return 0;
	}
	s1=0; s2=1;s3=1;s4=1;mu=1;gt=1;
	for(i=1;i<=n;i++)
	{
		s1=sqrt(x+s1);
		mu*=x;
		gt*=i;
		s2+=mu/i;
		s3+=mu/gt;
		s4+=pow(-1,i)*mu/gt;
	}
	printf("%.4f %.4f %.4f %.4f",s1,s2,s3,s4);
	return 0;
}

