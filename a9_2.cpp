#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap so luong chuoi trong mang: n=\n");
	scanf("%d",&n);
	char ars[n][20];
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap chuoi thu %d\n",i );
		scanf("%s",ars[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<20;j++){
			if(ars[i][j]>=65 &&ars[i][j]<=90)
				ars[i][j]+=32;
		}
	}
	for (int i = 1; i < n; ++i)		
	{
		int j=i-1;
		char tmp[20];
		strcpy(tmp, ars[i]);
		while(strcmp(ars[j],tmp)>0 && j>=0){
			strcpy(ars[j+1],ars[j]);
			j--;
		}
		strcpy(ars[j+1],tmp);
	}
	printf("Mang chuoi sau khi sap xep:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%3s\n",ars[i] );
	}
}