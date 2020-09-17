#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	do {
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
		printf("Nhap c=");
		scanf("%d",&c);
	}while(a+b<=c || a+c<=b || b+c<=a);
	int p=a+b+c;
	float p1=(float)p/2;
	float s=sqrt(p1*(p1-a)*(p1-b)*(p1-c));
	printf ("Chu vi tam giac la %d\n",p);
	printf("Dien tich tam giac la %f\n",s);
				
}