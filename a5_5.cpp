#include<stdio.h>
int main(){
	int a,b;
	do{
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	}while(a>=b || b<2 );
	printf("Cac so nguyen to giua khoang %d va %d la:\n",a,b );
	if(a<2){
		for(int i=2;i<=b;i++){
			int count=0;
			for(int j=2;j<=i/2;j++){
				if(i%j==0)
				count++;
			}
			if(count==0)
				printf("%d\n",i);

		}
	}else {
		for(int i=a;i<=b;i++){
			int count=0;
			for(int j=2;j<=i/2;j++){
				if(i%j==0)
				count++;
			}
			if(count==0)
				printf("%d\n",i);

		}

	}


}