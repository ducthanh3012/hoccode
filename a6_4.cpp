#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:\n",i);
		scanf("%d",&ary[i]);
	}
	int s[n];
	for(int i=0;i<n;i++){
		s[i]=0;
	}
	for(int i=0,j=0;i<n;i++){
		if(ary[i]>0)
		s[j]+=ary[i];
		else {
			j++;
		}
	}
	int max=s[0];
	for(int i=0;i<n;i++){
		if(s[i]>max){
			max=s[i];
		}
	}
	printf("Tong day nguyen duong lien tiep lon nhat la %d \n",max);


}