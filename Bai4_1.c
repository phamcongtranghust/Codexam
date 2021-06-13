#include <stdio.h>
int main()
{
 int n,gt=1;
 scanf("%d",&n );
 if (n>=8||n<0) printf("ERROR");
 else 
 {
 	for(int i=1;i<=n;i++)
		gt*=i;
	printf("%d",gt);		
 }

return 0;
}

