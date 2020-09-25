#include<stdio.h>
#include "func.h"
int main(){
	int x;
	printf("Nhap x=\n");
	scanf("%d",&x);
	//kiem tra so nguyen to
	kiemtranguyento(x);
	//nghich dao
	printf("Nghich dao: %f\n",timnghichdao(x));
	//Tim so nguyen to tiep theo lon hon x
	printf("So nguyen to tiep theo lon hon %d:%d\n",x,nguyentotieptheo(x) );
	//2 Tinh tong cac chu so cua 1 so nguyen x
	printf("Tong cac chu so cua %d\n",tongchuso(x));
	//3 4 Tinh chu vi dien tich
	int a,b,c;
	printf("Nhap a=\n");
	scanf("%d",&a);
	printf("Nhap b=\n");
	scanf("%d",&b);
	printf("Nhap c=\n");
	scanf("%d",&c);
	printf("Chu vi: %d\n",chuvi(a,b,c));
	printf("Dien tich %f\n",dientich(a,b,c) );

	//5 6 Tim uoc chung lon nhat va boi chung nho nhat
	int x1,x2;
	printf("Nhap x1=\n");
	scanf("%d",&x1);
	printf("Nhap x2=\n");
	scanf("%d",&x2);
	
	printf("Uoc chung lon nhat cua %d %d: %d\n",x1,x2,uocchung(x1,x2) );
	printf("Boi chung nho nhat cua %d %d: %d\n",x1,x2,boichung(x1,x2) );



}