#include <stdio.h>
int main()
{
    int n,a[100],demduong,demam,tongduong,tongam;
    demduong=demam=tongduong=tongam=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			demduong++;
			tongduong+=a[i];
		}
		if(a[i]<0)
		{
			demam++;
			tongam+=a[i];
		}
	}
	if(demam==n) printf("Mang khong co so duong");
		else printf("%f",tongam/(demam+0.0));
	if(demduong==n) printf("\nMang khong co so am");
		else printf("\n%d",tongduong);		
	return 0;
}

