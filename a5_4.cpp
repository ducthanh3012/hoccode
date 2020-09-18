#include<stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n<2)
		printf("Khong co so nguyen to nho hon %d\n",n );
	else{
		for(int i=2;i<=n;i++){
			int count=0;
			for(int j=2;j<=i/2;j++){
				if(i%j==0)
					count++;
			}
			if(count==0)
				printf("So nguyen to nho hon %d la %d\n",n,i);
		}
	}
}