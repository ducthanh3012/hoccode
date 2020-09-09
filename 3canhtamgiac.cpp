#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				int p = a+b+c;
				printf("%d %d %d la 3 canh cua 1 tam giac\n",a,b,c);
				printf("Chu vi: %d\n",p);
				//tinh dien tich
				float p2 = (float)p/2;
				float s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
				printf("Dien tich: %f\n",s);

			}else{
				printf("Day khong phai 3 canh cua 1 tam giac\n");
			}
		}else{
			printf("Day khong phai 3 canh cua 1 tam giac\n");
		}
	}else{
		printf("Day khong phai 3 canh cua 1 tam giac\n");
	}
}



