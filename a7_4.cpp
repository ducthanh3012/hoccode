#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);

	int arr[n], i=0;
	for (int i = 0; i < n; ++i)
	{	
		printf("Nhap so thu %d\n",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			for (int k = 0; k < i-j; ++k)
			{
				if(arr[k]>arr[k+1]){
					int tmp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=tmp;
				}
			}			
		}
		for (int j = 0; j <= i; ++j)
		{
			printf("%5d",arr[j]);	
		}
		printf("\n");
	}
	
}