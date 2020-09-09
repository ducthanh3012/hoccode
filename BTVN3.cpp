#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("Nhap gia tri thang:");
	scanf("%d",&a);
	printf("Nhap gia tri ngay:");
	scanf("%d",&b);
	if(a==1){
		printf("Ngay thu %d trong nam\n",b);
		//tinh thu may 1
		int t1=((b-1)%7)+2;
		printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t1);
		}else{
			if(a==2){
			printf("Ngay thu %d trong nam\n",b+31);
			//tinh thu may 2
			int t2=((b+31-1)%7)+2;
			printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t2);

			}else{
				if(a==3){
				printf("Ngay thu %d trong nam\n",b+31+28);
				//tinh thu may 3
				int t3=((b+31+28-1)%7)+2;
				printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t3);
				}else{
					if(a==4){
					printf("Ngay thu %d trong nam\n",b+31+28+31);
					//tinh thu may 4
					int t4=((b+31+28+31-1)%7)+2;
					printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t4);
					}else{
						if(a==5){
						printf("Ngay thu %d trong nam\n",b+31+28+31+30);
						//tinh thu may 5
						int t5=((b+31+28+31+30-1)%7)+2;
						printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t5);
						}else{
							if(a==6){
							printf("Ngay thu %d trong nam\n",b+31+28+31+30+31);
							//tinh thu may 6
							int t6=((b+31+28+31+30+31-1)%7)+2;
							printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t6);
							}else{
								if(a==7){
							printf("Ngay thu %d trong nam\n",b+31+28+31+30+31+30);
							//tinh thu may 7
							int t7=((b+31+28+31+30+31+30-1)%7)+2;
							printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t7);
								}else{
									if(a==8){
									printf("Ngay thu %d trong nam\n",b+31+28+31+30+31+30+31);
									//tinh thu may 8
									int t8=((b+31+28+31+30+31+30+31-1)%7)+2;
									printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t8);
									}else{
										if(a==9){
										printf("Ngay thu %d trong nam\n",b+31+28+31+30+31+30+31+31);
										//tinh thu may 9
										int t9=((b+31+28+31+30+31+30+31+31-1)%7)+2;
										printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t9);
										}else{
											if(a==10){
											printf("Ngay thu %d trong nam\n",b+31+28+31+30+31+30+31+31+30);
											//tinh thu may 10
											int t10=((b+31+28+31+30+31+30+31+31+30-1)%7)+2;
											printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t10);
												}else{
													if(a==11){
													printf("Ngay thu %d trong nam\n",b+31+28+31+30+31+30+31+31+30+31);
													//tinh thu may 11
													int t11=((b+31+28+31+30+31+30+31+31+30+31-1)%7)+2;
													printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t11);
												}else{
													printf("Ngay thu %d trong nam\n",b+31+28+31+30+31+30+31+31+30+31+30);
													//tinh thu may 12
													int t12=((b+31+28+31+30+31+30+31+31+30+31+30-1)%7)+2;
													printf("Ngay %d thang %d la thu %d trong tuan\n",b,a,t12);
												}}}}}}}}}}}



}