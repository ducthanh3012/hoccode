#include <stdio.h>
#include <string.h>
int main (){
	int (n);
	printf("Nhap so ky tu cua chuoi:");
	scanf("%d",&n);
	char s[n];
	printf("Nhap chuoi ban dau:\n");
	scanf("%s",s);
	int songuyenam=0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117)
			songuyenam ++;
	}
	printf("So nguyen am trong chuoi la: %d\n",songuyenam );
	int sokytykhac =strlen(s)-songuyenam;
	printf("So ky tu khac trong chuoi la: %d\n",sokytykhac);
}