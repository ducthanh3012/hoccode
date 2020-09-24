#include<stdio.h>
int main(){
	int n,x;
	printf("Nhap n=\n");		
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
      	printf("Nhap so thu %d\n",i);
      	scanf("%d",&arr[i]);
	}
	printf("Nhap so can kiem tra:\n");
	scanf("%d",&x);
	for (int i = 1; i < n; ++i)
	{
		int j=i-1;
		int tmp=arr[i];
		while(j>=0 && tmp<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=tmp;
	}
	int a;

	if(x<=arr[0])
		printf("Khong co so can tim\n");
	else{
		for (int i = n; i >=0; i--)
		{
			if(arr[i]<x){
				a=arr[i];
				break;
			}
		}
	printf("So can duoi %d la %d\n",x,a);
	}

}