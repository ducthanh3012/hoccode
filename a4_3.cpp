#include <stdio.h>
int main(){
	int s=0,a=1;
	for ( ;a/2<100;a+=2){
		s=s+a;
	}
	printf("Tong cua 100 so le dau tien la %d\n",s);
}