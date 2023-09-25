#include <stdio.h>
#include <stdlib.h>
typedef struct ST_sinhvien {
    char name[50],roll[20];
    int age
}sinhvien;

int main(int argc, char *argv[]) 
{
//bai1
	int n,i,j,k,t,sum = 0;
	printf("\nNhap vao N so nguyen ");
	scanf("%d",&n);
	int p[n],c[n];
	for (i=0;i<n;i++){
		printf("\nNhap so nguyen[%d] = ",i);
		scanf("%d",&p[i]);}
	for (i=0;i<n;i++){
		if(p[i] % 5 == 0)
		sum = sum+p[i];
	}
	printf("Tong cac so chia het cho 5 = %d",sum );
	printf("\nCac so chinh phuong la ");
	for (i=0;i<n;i++){
		for(j=1;j<=p[i];j++){
			if(j*j == p[i]){
				printf("%d ",p[i]);
			}
		}}
	printf("\nSap xep mang = ");
	for(i=0;i<n-1;i++){
        for (k=i;k<n;k++){
            if (p[k]%2==0){
                t = p[i];
                p[i]=p[k];
                p[k]=t;
                break;}}}
	for (i=0;i<n;i++){
		printf("%d ",p[i]);}
//bai2
int x,m,b;
   printf("\nNhap tong so sinh vien ");
   scanf("%d",&x);
   sinhvien sv[x];
   for (m=0;m<x;m++){
       printf("\nNhap ten sinh vien %d :",m);
       scanf("%s",&sv[m].name);
       fflush(stdin);fflush(stdout);
       printf("\nNhap ... sinh vien %d :",m);
       scanf("%s",&sv[m].roll);
       fflush(stdin);fflush(stdout);
       printf("\nNhap tuoi sinh vien %d :",m);
       scanf("%d",&sv[m].age);
   }
   for (m=0;m<x;m++){
       for (b=1;b<sv[m].age;b++){
           if(b*b == sv[m].age){
               printf("\n");
               printf("%s  %s  %d",sv[m].name,sv[m].roll,sv[m].age);
               break;
           }
       }
   }
	return 0;
}