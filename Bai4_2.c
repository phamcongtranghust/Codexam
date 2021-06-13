#include <stdio.h>
#include <math.h>
int main()
{
	int n,check=1;
	scanf("%d",&n);
	if(n<2) check=0;
	for(int i=2;i<=sqrt(n);i++)
		if (n%i==0) check=0;
	if(check==1) printf("La so nguyen to");
	else printf("Khong phai so nguyen to"); 	
	return 0;
}

