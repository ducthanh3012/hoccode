#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	if(a>8){
		printf("Day khong phai la ngay trong tuan\n");
		}else{
		if(a<2){
			printf("Day khong phai la ngay trong tuan\n");
			}else{
			if(a==8){
			printf("Chu Nhat\n");
				}else{
				printf("Thu %d\n",a);
				}
			}
		}

}