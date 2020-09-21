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
	float s=0,count=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2==1)
			s+=ary[i];
			count++;
	}
	printf("Trung binh cong cac so le: %f\n",(float)s/count);
}