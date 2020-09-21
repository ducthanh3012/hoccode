#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	bool c=false;
	for(int i=0;i<n;i++){
		if(ary[i]==x){
			printf("X thuoc mang nay\n");
			c=true;
			break;
		}
	}
	if(!c)
		printf("X khong thuoc mang nay\n");
	
}