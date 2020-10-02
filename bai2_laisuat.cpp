#include <stdio.h>
int main(){
	int nam;
	float ls,tien;
	printf("Nhap so tien:\n");
	scanf("%f",&tien);
	printf("Nhap lai suat (% moi nam):\n");
	scanf("%f",&ls);
	printf("Nhap so nam:\n");
	scanf("%d",&nam);
	float inter;
	float x=tien;
	for (int i = 0; i < nam; ++i)
	{
		inter=(tien*ls)/100;
		tien+=inter;
		printf("So tien lai nam %d:%f\n",i+1,inter );
		printf("So tien sau %d nam: %f\n",i+1,tien );

	}
	tien=x;
	inter=0;
	for (int i = 0; i < nam; ++i)
	{
		inter=(tien*ls)/100;
		tien+=inter;
		printf("Year		interest		Sum\n");
		printf("%d		%f 		%f \n",i+1,inter,tien );
	}

}