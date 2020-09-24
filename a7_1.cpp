#include<stdio.h>
int main(){
	int arr[2][3];
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Nhap arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int vi[3][2];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			vi[i][j]=arr[j][i];
		}
	}
	printf("Ma tran chuyen vi:\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%5d",vi[i][j] );	
		}
		printf("\n");
	}


}