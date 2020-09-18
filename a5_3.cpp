#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	while(a*b!=0){
		if(a>b)
			a%=b;
		else b%=a;
	}
	printf("Uoc chung lon nhat la %d\n",a+b);
}