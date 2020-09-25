#include<stdio.h>
#include<math.h>
//tim so thu n trong day fibonaci
int timsothun (int n){
	int a,i=0,j=1;
	if(n<=0)
		a=0;
	else 	if(n<=2)
				a=1;
			else{
				for (int count = 1; count < n; ++count)
				{
					a=i+j;
					i=j;
					j=a;
				}
			}
	return a;
}

//kiem tra 1 so nguyen to
void kiemtranguyento (int n){
	if (n<2){
		printf("%d khong phai la so nguyen to\n",n );
		return;
	}
	else{
		int count=0;
		for (int i = 2; i <n/2; ++i)
		{
			if (n%i==0)
				count++;
		}
		if(count==0)
			printf("%d la so nguyen to\n",n );
		else{
			printf("%d khong phai la so nguyen to\n",n );
		}
		return;
	}

}
//tim nghich dao cua 1 so
float timnghichdao (int n){
	float nd;
	if (n==0){
		nd=0;
		return nd;
	}else {
		nd=1/(float)n;
		return nd;
	}
}

//1. Tim so nguyen to tiep theo cua n
int nguyentotieptheo (int n){
	for (int i = n+1; ; ++i)
	{
		int count=0;
		for(int j=2;j<i/2;j++){
			if (i%j==0)
			{
				count++;
			}
		}
		if (count==0)		
		{
			return i;
		}
	}
}

//2. Tinh tong cac chu so cua n
int tongchuso (int n){
	int a=0;
	for (; n > 0; )
	{
		a=a+n%10;
		n=n/10;

	}
	return a;
}

//3. Tinh chu vi tam giac
int chuvi (int a, int b, int c){
	int p;
	return p=a+b+c;
}

//4. Tinh dien tich tam giac
float dientich (int a, int b, int c){
	float s;
	float p=(float)(a+b+c)/2;
	return s=sqrt(p*(p-a)*(p-b)*(p-c));
}

//5. Tim uoc chung lon nhat cua 2 so
int uocchung (int a, int b){
	if(a==0 ||b==0)
		return a+b;

	else{
		while (a!=b){
	 		if (a>b)
				a=a-b;
			else 
				b=b-a;
		}
		return a;
	}
}

//6. Tim boi chung nho nhat cua 2 so
int boichung (int a, int b){
	if(a>b){;
		int i=a;
		for (; i <= a*b; ++i)
		{
			if (i%a==0 && i%b==0)
				break;
		}
		return i;
	} else{
		int j=b;
		for (; j <= a*b; ++j)
		{
			if (j%a==0 && j%b==0)
				break;
		}
		return j;
	}
}




























