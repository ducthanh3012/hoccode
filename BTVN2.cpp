#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	if(a>=b){
		if(b==0){
			printf("Khong co ket qua\n");
			}else{
			//tinh a/b
			float c = (float)a/b;
			printf("%f\n",c);}
		}else{
		//tinh a*b
		int d = a*b;
		printf("%d\n",d);
		}
	
}