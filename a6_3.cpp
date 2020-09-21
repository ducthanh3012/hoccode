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
	int count[n];
	for(int i=0;i<n;i++){
		count[i]=0;
	}
	for(int i=0,j=0;i<n;i++){
		if(ary[i]>0)
		count[j]++;
		else {
			j++;
		}
	}
	int max=count[0];
	for(int i=0;i<n;i++){
		if(count[i]>max){
			max=count[i];
		}
	}
	printf("Day nguyen duong lien tiep dai nhat la %d so\n",max);


}