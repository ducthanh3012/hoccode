#include <stdio.h>
int main(){
	int f[100];
	f[0]=0;
	f[1]=1;
	f[2]=f[0]+f[1];
	printf("Day Fibonaci trong khoang tu 1 den 100 la:\n");
	for (int i = 2;i<100; ++i)
	{
		if(f[i]<=100 ){
			printf("%5d",f[i] );
			f[0]=f[1];
			f[1]=f[2];
			f[2]=f[i];
			f[i+1]=f[1]+f[2];

		}else {
			printf("\n");
			break;
		}
	}
}