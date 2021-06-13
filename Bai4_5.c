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
	else printf("Phuong trinh co nghiem duy nhat %f",-(c+0.0)/b);
}
else 
{
	delta=b*b-4*a*c;
	if (delta<0) printf("Phuong trinh co nghiem phuc");
	if (delta==0) printf("Phuong trinh co nghiem kep: %f %f",-b/(2.0*a));
	if (delta>0)
	{
		delta=sqrt(delta);
		printf("Phuong trinh co 2 nghiem phan biet: %f %f",(-b+delta)/(2.0*a),(-b-delta)/(2.0*a));
	}
}
return 0;
}

