#include <stdio.h>
int main(){
	int s=0,a=1,n;
	do {printf("Nhap n lon hon 0:");
		scanf("%d",&n);
		}
	while (n<=0);
	while (a<=n){
		s=s+a;
		a+=1;
	}
	printf ("Tong tu 1 den %d la %d\n",n,s);
}