#include <stdio.h>
#include <string.h>
int main()
{
	char S[100],T[100];
	int dem[126];
	fflush(stdin); gets(S);
	fflush(stdin); gets(T);
	strcat(S,T);
	for(int i=32;i<=126;i++)
		dem[i]=0;
	for(int i=0;i<strlen(S);i++)
		dem[S[i]]++;
	for(int i=32;i<=126;i++) 
		if(dem[i]!=0) printf("%c",(char) i);	
	printf("\n");	
	for(int i=32;i<=126;i++) 
		if(dem[i]!=0) printf("\n%d",dem[i]);		
	return 0;
}
