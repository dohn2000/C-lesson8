#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ST_HCN{
	float S,m,n;
} HCN;	

int main(int argc, char *argv[]) 
{
	int i;
	float t=0;
	HCN s[5];
	for (i=0;i<5;i++){
		printf("\nNhap thong tin HCN %d ",i);
		printf("\nNhap chieu dai = ");
		scanf("%f",&s[i].m);
		printf("\nNhap chieu rong = ");
		scanf("%f",&s[i].n);
	}
	for (i=0;i<5;i++){
		s[i].S=s[i].m*s[i].n;
		printf("\nDien tich HCN %d = %.2f",i,s[i].S);}
	for (i=0;i<5;i++){
		t += s[i].S;
	}
	printf("\nTong dien tich 5 HCN = %.2f",t);
	return 0;
}
