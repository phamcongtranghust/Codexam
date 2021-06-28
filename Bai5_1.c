#include <stdio.h>
int main()
{
    int n,tong=0,a[20];
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Error");
        return 0;
    }
    for(int i=1;i<=n;i++) 
    {
        scanf("%d",&a[i]);
        tong+=a[i];
    }   
    for(int i=n;i>=1;i--) printf("%d ",a[i]);
    printf("\n%d",tong);
    return 0;
}
