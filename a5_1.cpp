#include <stdio.h>
int main(){
	int n,i=0;
	do{
	printf("Nhap n=\n");
	scanf("%d",&n);
	}while(n<0);
	printf("Cac so chan nho hon %d la\n",n);
	for( ;i<=n;i++){
		if(i%2==0)
			printf("%d\n",i);
	}
}