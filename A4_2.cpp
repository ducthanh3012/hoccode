#include <stdio.h>
int main(){
	int n;
	double a=1,s=0;
	do {printf("Nhap n lon hon 0:");
		scanf("%d",&n);
		}
	while (n<=0);
	while (a<=n){
		s=s+double(1/a);
		a+=1;
	}
	printf ("Tong S can tim la %lf\n",s);
}