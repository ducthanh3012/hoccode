#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so:\n");
	scanf("%d",&n);
	if (n<2) 
		printf("%d khong phai la so nguyen to\n",n);
	else 	{
			int i=2, count=0;
			for (;i<=sqrt(n);i++)
				{
				if (n%i==0) count++;	
				}
			if(count==0)
				printf("%d la so nguyen to\n",n);
			else 
				printf("%d khong phai la so nguyen to\n",n);

			}
}