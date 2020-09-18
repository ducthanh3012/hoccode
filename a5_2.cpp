#include <stdio.h>
int main(){
	int n;
	do{
	printf("Nhap n=");
	scanf("%d",&n);
	}while(n<0);
	printf("Uoc cua %d la 1 %2d ",n,n);
	int s=1+n;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			printf("%2d",i);
			s+=i;
		}
	}
	printf("Tong cac uoc cua %d la %d\n",n,s );
}