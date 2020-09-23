#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	int min=0;
	for (int i=0;i<n;i++){
		if(ary[i]>0){
			min=ary[i];
			break;
		}
	}
	if(min==0)
		printf("Khong co so duong nao\n");
	else{
		for(int i=0;i<n;i++){
			if(ary[i]>0&&ary[i]<min){
			min=ary[i];
			}
		}
		printf("So nguyen duong nho nhat: %d\n",min);
	}
}