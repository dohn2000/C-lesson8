#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,m,t,n;
	
	
void Nhapsonguyen(){
printf("\nNhap vao so nguyen N = ");
	scanf("%d",&n);
}
void giaithua(){
	m = 1;
	for (i=1;i<=n;i++)
	{
		m = m*i;
	}
	printf("\nN! = %d",m);
}
void tong(){
	t = 0;
		for (i=0;i<=n;i++)
	{
		t = t+i;
	}
	printf("\nNTong = %d",t);	
}
void sosanh(){
	if (m > t){
		printf("\nN! > sumN");
	}
	else{printf("\nN! < sumN");
	}
}
int main(int argc, char *argv[]) 
{
	
	Nhapsonguyen();
	giaithua();
	tong();
	sosanh();
	
	return 0;
}
