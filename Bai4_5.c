#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,delta;	
scanf("%f %f %f",&a,&b,&c);
if(a==0)
{
	if(b==0)
	{
		if(c==0) printf("Phuong trinh vo so nghiem");
			else printf("Phuong trinh vo nghiem");
	} 
	else printf("%f",-c/b);
}
else 
{
	delta=b*b-4*a*c;
	if (delta==0) printf("%f %f",-b/(2*a),-b/2/a);
	if (delta>0)
	{
		delta=sqrt(delta);
		printf("%f %f",(-b+delta)/(2*a),(-b-delta)/(2*a));
	}
	if (delta<0) 
	{
		delta=sqrt(-delta);
		printf("%f+%fi %f-%fi",-b/2/a,delta/2,-b/2/a,delta/2);
	}
}
return 0;
}
