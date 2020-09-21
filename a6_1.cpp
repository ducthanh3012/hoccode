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
	for(int i=n-1;i>=0;i--){
		if(ary[i]%2==1){
			printf("So le cuoi cung cua mang la: %d\n",ary[i]);
			break;
		}
	}
}